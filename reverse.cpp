stringstream convert;
convert << x;
string y(convert.str());
string z(y.rbegin(), y.rend());
return z;