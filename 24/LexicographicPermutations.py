#!/usr/bin/python3

Base = "0123456789"
Position = 1000000
Count = 0

for D0 in Base:
	for D1 in Base:
		if D1 != D0:
			for D2 in Base:
				if D2 != D0 and D2 != D1:
					for D3 in Base:
						if D3 != D0 and D3 != D1 and D3 != D2:
							for D4 in Base:
								if D4 != D0 and D4 != D1 and D4 != D2 and D4 != D3:
									for D5 in Base:
										if D5 != D0 and D5!=D1 and D5 != D2 and D5 != D3 and D5 != D4:
											for D6 in Base:
												if D6!= D0 and D6 != D1 and D6 != D2 and D6 != D3 and D6 != D4 and D6 != D5:
													for D7 in Base:
														if D7!= D0 and D7 != D1 and D7 != D2 and D7 != D3 and D7 != D4 and D7 != D5 and D7 != D6:
															for D8 in Base:
																if D8!= D0 and D8 != D1 and D8 != D2 and D8 != D3 and D8 != D4 and D8 != D5 and D8 != D6 and D8 != D7:
																	for D9 in Base:
																		if D9 != D0 and D9 != D1 and D9 != D2 and D9 != D3 and D9 != D4 and D9 != D5 and D9 != D6 and D9 != D7 and D9 != D8:
																			Count = Count + 1
																			if Count == Position:
																				print('the ',Position,'th permutation is ',D0,D1,D2,D3,D4,D5,D6,D7,D8,D9)
																				break;

print('There are total ',Count, ' Permutations ')
