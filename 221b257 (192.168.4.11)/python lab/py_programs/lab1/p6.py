print('enter 6 subjects to find sum and percentage')
s1=float(input('marks of subject 1\n'))
s2=float(input('marks of subject 2\n'))
s3=float(input('marks of subject 3\n'))
s4=float(input('marks of subject 4\n'))
s5=float(input('marks of subject 5\n'))
s6=float(input('marks of subject 6\n'))
total=s1+s2+s3+s4+s5+s6
avg=total/5
percentage=(total/5)*100
print('sum of all 6 subjects\n',total)
print('percentage of all 6 subjects\n',percentage)
