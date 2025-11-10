def how_much(n):
	"""
	>>> how_much(112233)
	3
	"""
	def has(n,k):
		i=0
		while n!=0:
			if n%10==k:
				return 1
			n//=10
		return 0
	k=0
	i=0
	while k<=9:
		if has(n,k):
			i+=1
		k+=1	
	return i

				
				
