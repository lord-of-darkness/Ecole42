Program P1;
const pi = 3.1415926;
var a, b, x, c, alfa, beta, gama, p, PE, S, Ar : real;
begin
	Writeln('dati valorile laturilo');
	Readln(a, b, c);
	PE := a + b + c;
	p := PE / 2;
	S := sqrt(p * (p - a) * (p -b) * (p - c));
	x := sqrt((p * (p - a))/(b * c));
	Ar := pi - 2 * ARCTAN(x / sqrt(1 - sqr(x)));
	alfa := 180 * Ar / pi;
	writeln ( S , ' ' , Pe , ' ', alfa,' ',beta,' ',);
end.



