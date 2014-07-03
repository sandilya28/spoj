// this is a python file
t = input()
for i in range(t) :
	inp = raw_input()
	x = long(inp.split(" ")[0])
	n = long(inp.split(" ")[1])
	cards = x
	while(cards>=n) :
		x = x + cards/n
		cards = cards/n + cards%n
	print x
