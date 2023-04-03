from __future__ import print_function
from utils import *

total_coding_score = 0.0;

q_nums = [9, 10, 11, 12]

for q_num in q_nums:
	pass_num = get_ok_num_perq("grades/Q%sres_.txt" % q_num)

	if q_num == 9:
		cur_score = pass_num * 2.5
		print("Item 9:", pass_num, "/", 8, "passed | score:", cur_score)
		total_coding_score += cur_score
	elif q_num == 10:
		cur_score = pass_num * 2.5
		print("Item 10:", pass_num, "/", 2, "passed | score:", cur_score)
		total_coding_score += cur_score
	elif q_num == 11:
		cur_score = pass_num * 10
		print("Item 11:", pass_num, "/", 1, "passed | score:", cur_score)
		total_coding_score += cur_score
	elif q_num == 12:
		cur_score = pass_num * 10
		print("Item 12:", pass_num, "/", 1, "passed | score:", cur_score)
		total_coding_score += cur_score
	else:
		raise ValueError('Wrong question number')


print("-----------------------------------------")
print("Phase 3: your total score of coding section:", total_coding_score, " (part)")
print("-----------------------------------------")
	

	
	
