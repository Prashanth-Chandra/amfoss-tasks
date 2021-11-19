import hashlib #basically it is THE library for hashing

class PrashanthCoinBlock:
    def __init__(self,previous_block_hash,transaction_list):#init is constructor for python
        self.previous_block_hash=previous_block_hash#self is used so that it is for the particular instance of the class
        self.transaction_list=transaction_list

        self.block_data="  -  ".join(transaction_list)+"  -  "+previous_block_hash
        self.block_hash=hashlib.sha256(self.block_data.encode()).hexdigest()#we can use any sha 256 isfor 32 letters in the hash

t1="A sends 3 PC to E"
t2="C sends 4.2 PC to A"
t3="D sends 3.98 PC to C"
t4="B sends 5 PC to E"
t5="E sends 2.2 PC to D"
t6="A sends 7 PC to D"
t7="C sends 10.2 PC to E"
t8="D sends 0.05 PC to B"

first_block=PrashanthCoinBlock("",[t1,t2])

print(first_block.block_data)
print(first_block.block_hash)

second_block=PrashanthCoinBlock(first_block.block_hash,[t3,t4])

print(second_block.block_data)
print(second_block.block_hash)

third_block=PrashanthCoinBlock(second_block.block_hash,[t5,t6])

print(third_block.block_data)
print(third_block.block_hash)

fourth_block=PrashanthCoinBlock(third_block.block_hash,[t7,t8])

print(fourth_block.block_data)
print(fourth_block.block_hash)