x = single(1);
y = single(2);
z = single(1);
time = 0;

while (x+z) ~= single(1)
    z = single(z/y);
    x = single(1) +z;
    time = time +1
    if time == 100000
        break
    end
end