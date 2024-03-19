function [sub, div] = operations(x,y)
sub = subtract(x,y)
div = divide(x,y)
end
 
function z = subtract(x,y)
z = x-y
end
 
function k = divide(x,y)
k = x/y
end