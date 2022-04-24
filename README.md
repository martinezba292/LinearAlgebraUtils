# LinearAlgebraUtils

The headers included in this project provide a fast and easy way to handle
linear algebra operations such vectors and matrices for transformations.

Matrix transformations are meant to use with GLSL, wich means they follow 
a major column order in the array, i.e., columns are indexed first.
m_[0]   m_[3]   m_[6]   
m_[1]   m_[4]   m_[7]   
m_[2]   m_[5]   m_[8]

Although this classes provide a row order abstraction([column][row])