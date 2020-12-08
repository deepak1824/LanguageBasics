class LogChecker:
    def __init__(self,NAMES):
        self.NAMES = NAMES

    def CheckDuplicates(self,elist):
        if(len(elist)==len(set(elist))):
            return False
        else:
            return True
    
    def CheckIndex(self, index):
        for i in index:
            if(type(i)!= int or i < 0):
                return False
            else:
                return True
    
    def ExtractSubstring(self):
        first = []
        pname = []
        index = []
        optio = []
        for name in self.NAMES:
            t = name[0:5]
            first.append(t)
            se = name.index('_',5)
            p = name[5:]
            pname.append(p)
            th = name.index('_',se)
            ind = name[th+1:th+2]
            index.append(int(ind))
            o = name[th+3:]
            optio.append(o)
        return first, pname, index,optio
    
    def CheckOptionalName(self, opt):
        for name in opt:
            if (type(name) == str):
                return True
            else:
                return False
    
    def CheckFormat(self,first,pname, index, opt):
        
        if (not self.CheckDuplicates(first)):
            return False

        if(self.CheckDuplicates(pname)):
            return False
        
        if(not self.CheckIndex(index)):
            return False
        
        if (not self.CheckOptionalName(opt)):
            return False


if __name__ == "__main__":
    NAMES = [
        "test_logger_2",
        "test_logger_1_optional_suffix",
        "test_logger_1_another_optional_suffix",
        "test_updater_4",
        "test_updater_1"
    ]

    NAMES1 = [
        "test_logger_2",
        "test_logger_2",
        "test_logger_1_another_optional_suffix",
        "test_updater_4",
        "test_updater_1"
    ]

    NAMES2 = [
        "test_logger_2",
        "test_logger_1another_optional_suffix",
        "test_updater_4",
        "test_updater_1"
    ]


    
    mylog = LogChecker(NAMES)

    f,p, idx, opt = mylog.ExtractSubstring()

    print(mylog.CheckFormat(f,p,idx,opt))
