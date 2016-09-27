Program P1;
var k, n, l : real;
	m : integer;
begin
Writeln('dati nr de puncte');
for m := 1 to 25 do begin
Readln(n);
k := 100 / 27;
l := n * k;
write('nota : ');
if (l <= 100) and (l >= 95) then writeln('10')
	else if (l <= 94) and (l >= 87) then writeln('9')
		else if (l <= 86) and (l >= 76) then writeln('8')
			else if (l <= 75) and (l >= 61) then writeln('7')
				else if (l <= 60) and (l >= 45) then writeln('6')
					else if (l <= 44) and (l >= 30) then writeln('5')
						else if (l <= 29) and (l >= 20) then writeln('4')
							else if (l <= 19) and (l >= 11) then writeln('3')
								else if (l <= 10) and (l >= 0) then writeln('2')
																else writeln('Date Gresite');
																end;
end.	
