from __future__ import print_function
from utils import *

total_coding_score = 0.0;

q_nums = [1, 2.1]

for q_num in q_nums:
	pass_num = get_ok_num_perq("grades/Q%sres_.txt" % q_num)

	if q_num == 1:
		q1_score = pass_num * 2.5
		print("Item 1:", pass_num, "/", 2, "passed | score:", q1_score)
		total_coding_score += q1_score
	elif q_num == 2.1:
		q2_score = pass_num * 5
		print("Item 2-1:", pass_num, "/", 1, "passed | score:", q2_score)
		total_coding_score += q2_score
	else:
		raise ValueError('Wrong question number')


print("-----------------------------------------")
print("Phase 1: your total score of coding section:", total_coding_score)
print("-----------------------------------------")
	

	
	
