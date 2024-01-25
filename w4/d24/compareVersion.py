class Solution(object):
    def compareVersion(self, version1, version2):
        l1 = version1.split(".")
        l2 = version2.split(".")
        for i in range(len(l1)):
            l1[i] = int(l1[i])
        for i in range(len(l2)):
            l2[i] = int(l2[i])

        diff = len(l1)-len(l2)
        if(diff>0):
            for i in range(diff):
                l2.append(0)
        else:
            for i in range(-diff):
                l1.append(0)

        for i in range(len(l1)):
            if(l1[i]>l2[i]):
                return 1
            if(l1[i]<l2[i]):
                return -1
        return 0