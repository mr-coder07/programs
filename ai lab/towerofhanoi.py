count = 0 
def toh(n , sp , dp , ip ):
    global count
    if n ==1 :
        count+=1
        print(f"moving plate 1 from {sp} to {dp}")
        return
    toh(n-1 , sp , ip , dp )
    print(f"moving plate {n-1} from {sp} to {dp}")
    toh(n-1 , ip , dp ,sp)

toh(2 , "A" ,"B","C");print(count , " moves used ")