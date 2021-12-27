```
# 快速排序的两个思路
# 1.创建两个新列表进行排序，此方法需要额外两个数组空间，并且会改变原数组，返回的是一个新数组
def quick_sort(a_list):
	if len(a_list) < 2:
		return a_list
	else:
		pivot = a_list[0]
		a_list.remove(pivot)
		left = [i for i in a_list if i < pivot]
		right = [i for i in a_list if i >= pivot]
		return quick_sort(left) + [pivot] + quick_sort(right)
	

# 2.交换元素法，不需要额外空间，直接操作原数组
def quick_sort(a, l, r): # 数组名，左边界索引，有边界索引
    '''
    step1:分治——分成子问题
    step2:递归——递归处理子问题
    '''
    if l >= r: return # 当左右边界相遇或交叉，递归终止，说明已经排序完

    left = l
    right = r
    pivot = a[(left+right)//2] # 左右边界索引和中心枢纽值

    while left <= right: # 等于号为了让左右指针最终穿过彼此
        while a[left] < pivot: 
            left += 1  # 滑动左指针，遇到比枢纽值大的数则停下
        while a[right] > pivot: 
            right -= 1  # 滑动右指针，遇到比枢纽值小的数则停下
        if left <= right:
            a[left], a[right] = a[right], a[left] # 交换两个值
            left += 1
            right -= 1 
            # 交换完后继续直到左指针穿过右指针，此时(l,right)、(left,r)分成两个子区间数组
    quick_sort(a, l, right) # 递归调用处理左数组
    quick_sort(a, left, r) # 递归调用处理右数组
```
