
/*!
\ingroup PkgKernelDKernelConcept
\cgalConcept

A model for this must provide: 

\cgalRefines `AdaptableFunctor` (with one argument) 

\sa `Kernel_d::CartesianConstIterator_d` 

*/
class Kernel_d::ConstructCartesianConstIterator_d {
public:
/*! 
returns an iterator on the 0'th %Cartesian coordinate of `p`. 
*/ 
Kernel_d::Cartesian_const_iterator_d operator()(const Kernel_d::Point_d 
&p); 

/*! 
returns the past the end iterator of the %Cartesian coordinates of `p`. 
*/ 
Kernel_d::Cartesian_const_iterator_d operator()(const Kernel_d::Point_d 
&p, int); 

}; /* end Kernel_d::ConstructCartesianConstIterator_d */
