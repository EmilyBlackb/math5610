x = double(1);
y = double(2);
z = double(1);
time = 0;

while (x+z) ~= double(1)
    z = double(z/y);
    x = double(1) +z;
    time = time +1
    if time == 100000
        break
    end
end