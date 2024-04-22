def std_detail():                                                 #this line is not supposed to be changed                                                        
    import dictionariescreated as dc                              #this line is not supposed to be changed                                            
    name_dict=dc.d1                                               #this line is not supposed to be changed                          
    stdname_lencount_dict={}
    std_name=""
    for enroll,name in name_dict.items():
        name=name.strip()
        name_len=len(name)
        stdname_lencount_dict[name]=name_len

    max_name_len=max(stdname_lencount_dict.values())
    name_list=[name for name,leng in stdname_lencount_dict.items() if leng==max_name_len]
    for name in name_list:
        std_name = name
        for enroll,stdname in name_dict.items():
            if stdname==std_name:
                print(stdname,enroll)

std_detail()#this line is not supposed to be changed  