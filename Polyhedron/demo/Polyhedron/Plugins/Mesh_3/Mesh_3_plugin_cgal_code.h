#include "Polyhedron_type_fwd.h"
#ifdef CGAL_MESH_3_DEMO_ACTIVATE_SEGMENTED_IMAGES
#  include "Image_type_fwd.h"
#endif
#ifdef CGAL_MESH_3_DEMO_ACTIVATE_IMPLICIT_FUNCTIONS
#  include "implicit_functions/Implicit_function_interface.h"
#endif
#include "Kernel_type.h"
#include "Meshing_thread.h"
#include "Scene_surface_mesh_item.h"

class Scene_surface_mesh_item;

struct Mesh_parameters;
namespace CGAL { namespace Three {
  class Scene_item;
  class Scene_interface;
}}

typedef std::list<std::vector<CGAL::Exact_predicates_inexact_constructions_kernel::Point_3> > Polylines_container;

Meshing_thread* cgal_code_mesh_3(const Polyhedron* pMesh,
                                 const Polylines_container& polylines,
                                 const Polyhedron* pBoundingMesh,
                                 QString filename,
                                 const double facet_angle,
                                 const double facet_sizing,
                                 const double facet_approx,
                                 const double tet_sizing,
                                 const double edge_size,
                                 const double tet_shape,
                                 bool protect_features,
                                 bool protect_borders,
                                 const double sharp_edges_angle,
                                 const int manifold,
                                 const bool surface_only,
                                 CGAL::Three::Scene_interface* scene);

Meshing_thread* cgal_code_mesh_3(const SMesh* pMesh,
                                 const Polylines_container& polylines,
                                 const SMesh* pBoundingMesh,
                                 QString filename,
                                 const double facet_angle,
                                 const double facet_sizing,
                                 const double facet_approx,
                                 const double tet_sizing,
                                 const double edge_size,
                                 const double tet_shape,
                                 bool protect_features,
                                 bool protect_border,
                                 const double sharp_edges_angle,
                                 const int manifold,
                                 const bool surface_only,
                                 CGAL::Three::Scene_interface* scene);
#ifdef CGAL_MESH_3_DEMO_ACTIVATE_IMPLICIT_FUNCTIONS
Meshing_thread* cgal_code_mesh_3(const Implicit_function_interface* pfunction,
                                 const double facet_angle,
                                 const double facet_sizing,
                                 const double facet_approx,
                                 const double tet_sizing,
                                 const double edge_size,
                                 const double tet_shape,
                                 const int manifold,
                                 CGAL::Three::Scene_interface* scene);
#endif

#ifdef CGAL_MESH_3_DEMO_ACTIVATE_SEGMENTED_IMAGES
Meshing_thread* cgal_code_mesh_3(const CGAL::Image_3* pImage,
                                 const Polylines_container& polylines,
                                 const double facet_angle,
                                 const double facet_sizing,
                                 const double facet_approx,
                                 const double tet_sizing,
                                 const double edge_size,
                                 const double tet_shape,
                                 bool protect_features,
                                 const int manifold,
                                 CGAL::Three::Scene_interface* scene,
                                 bool detect_connected_components,
                                 bool is_gray = false,
                                 float iso_value = 3.f,
                                 float value_outside = 0.f,
                                 bool inside_is_less = true);
#endif
