 

for j in {10000,20000,40000,80000,160000,320000}
do
	#sum=0
	for i in {1,2,3,4,5}
	do	
		#VAL=$( /usr/bin/time -f "%U" ./main merge_sort $j 2>&)"
		#sum="$(($sum + $VAL))"
		/usr/bin/time -f "$j %U" -o insertion_almost.csv --append ./main insertion_sort $j
	done
	#echo $sum
done

for j in {10000,20000,40000,80000,160000,320000}
do
	for i in {1,2,3,4,5}
	do	
		/usr/bin/time -f "$j %U" -o merge_almost.csv --append ./main merge_sort $j
	done
done

for j in {10000,20000,40000,80000,160000,320000}
do
	for i in {1,2,3,4,5}
	do	
		/usr/bin/time -f "$j %U" -o shell_sort4_almost.csv --append ./main shell_sort4 $j
	done
done 
for j in {10000,20000,40000,80000,160000,320000}
do
	for i in {1,2,3,4,5}
	do	
		/usr/bin/time -f "$j %U" -o shell_sort3_almost.csv --append ./main shell_sort3 $j
	done
done
for j in {10000,20000,40000,80000,160000,320000}
do
	for i in {1,2,3,4,5}
	do	
		/usr/bin/time -f "$j %U" -o shell_sort2_almost.csv --append ./main shell_sort2 $j
	done
done
for j in {10000,20000,40000,80000,160000,320000}
do
	for i in {1,2,3,4,5}
	do	
		/usr/bin/time -f "$j %U" -o shell_sort1_almost.csv --append ./main shell_sort1 $j
	done
done
for j in {10000,20000,40000,80000,160000,320000}
do
	for i in {1,2,3,4,5}
	do	
		/usr/bin/time -f "$j %U" -o hybrid_sort3_almost.csv --append ./main hybrid_sort3 $j
	done
done
for j in {10000,20000,40000,80000,160000,320000}
do
	for i in {1,2,3,4,5}
	do	
		/usr/bin/time -f "$j %U" -o hybrid_sort2_almost.csv --append ./main hybrid_sort2 $j
	done
done
for j in {10000,20000,40000,80000,160000,320000}
do
	for i in {1,2,3,4,5}
	do	
		/usr/bin/time -f "$j %U" -o hybrid_sort1_almost.csv --append ./main hybrid_sort1 $j
	done
done
