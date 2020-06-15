from collections import OrderedDict
import random

def communication_by_design(sr_in):
    sr_l = list(sr_in)
    color_dict = OrderedDict()

    dk_brown = (32, 16, 6)
    lt_brown = (128, 65, 46)
    orange = (178, 83, 47)
    pink = (145, 51, 87)

    color_default = dk_brown
    colors_random = [lt_brown, orange, pink]
    color_choice = random.choice(colors_random)

    for j in sr_l:
        sr_out = random.sample(sr_in, len(sr_in))
        index_l = sr_out.index(j)

        # print(sr_out)

        for k in range(len(sr_l)):
            if index_l == k:
                color_char = color_choice

            else:
                color_char = color_default
            
            color_dict[k] = (sr_out[k], color_char)
        
        print(color_dict)

communication_by_design("COMMUNICATION")
