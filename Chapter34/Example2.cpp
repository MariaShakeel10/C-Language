// Class-specific new and delete operators using a memory pool

#include <iostream>
#include <cstring>
#include <cstddef>
#include <new>

using namespace std;

const int MAXNAMES = 100;

// ---------- Class Definition
class Name
{
public:
    Name(const char* s)
    {
        strncpy(name, s, 24);
        name[24] = '\0';   // ensure null-termination
    }

    void display() const
    {
        cout << name << endl;
    }

    // Class-specific new and delete
    void* operator new(size_t size);
    void operator delete(void* ptr);

    ~Name() {}   // do-nothing destructor

private:
    char name[25];
};

// ---------- Memory Pool
char pool[MAXNAMES][sizeof(Name)];
int inuse[MAXNAMES] = {0};   // initialize all slots as free

// ---------- Overloaded new operator
void* Name::operator new(size_t size)
{
    for (int p = 0; p < MAXNAMES; p++)
    {
        if (!inuse[p])
        {
            inuse[p] = 1;
            return pool[p];
        }
    }
    throw bad_alloc();   // pool exhausted
}

// ---------- Overloaded delete operator
void Name::operator delete(void* ptr)
{
    if (!ptr) return;

    int index = (static_cast<char*>(ptr) - pool[0]) / sizeof(Name);
    if (index >= 0 && index < MAXNAMES)
        inuse[index] = 0;
}

// ---------- Main Function
int main()
{
    Name* directory[MAXNAMES];
    char temp[25];

    for (int i = 0; i < MAXNAMES; i++)
    {
        cout << "Enter name # " << i + 1 << ": ";
        cin >> temp;
        directory[i] = new Name(temp);
    }

    cout << "\nStored Names:\n";

    for (int i = 0; i < MAXNAMES; i++)
    {
        directory[i]->display();
        delete directory[i];
    }

    return 0;
}

//***********************RESULT************************
/*Enter name # 1: dffg
Enter name # 2: asgf
Enter name # 3: sgeg
Enter name # 4: fastgw
Enter name # 5: g
Enter name # 6: eshg
Enter name # 7: geshe
Enter name # 8: gsdhb
Enter name # 9: hbsdhe
Enter name # 10: bsdhrh
Enter name # 11: greh
Enter name # 12: ehr
Enter name # 13: ehere
Enter name # 14: hgrh
Enter name # 15: ttrth
Enter name # 16: rjnhtrj
Enter name # 17: t
Enter name # 18: jr
Enter name # 19: tjtr
Enter name # 20: jtr
Enter name # 21: h
Enter name # 22: rt
Enter name # 23: rth
Enter name # 24: rth
Enter name # 25: rtj
Enter name # 26: rt
Enter name # 27: jr
Enter name # 28: hr
Enter name # 29: tj
Enter name # 30: rjetgqw
Enter name # 31: r
Enter name # 32: 23
Enter name # 33: r2
Enter name # 34: 3t2
Enter name # 35: t
Enter name # 36: t    
Enter name # 37: 76
Enter name # 38: t
Enter name # 39: k
Enter name # 40: dj
Enter name # 41:
dj
Enter name # 42: d5j
Enter name # 43: -1
Enter name # 44: 1wxcx
Enter name # 45: xdxc
Enter name # 46: x
Enter name # 47:
crw
Enter name # 48: xrc 
Enter name # 49: cefc
Enter name # 50: c
Enter name # 51: c
Enter name # 52: f
Enter name # 53: cfc
Enter name # 54: c
Enter name # 55: fx
Enter name # 56: cfx3aefyt
Enter name # 57: uyujp
Enter name # 58:
ebr
Enter name # 59: wrv
Enter name # 60:

vw
Enter name # 61: v
Enter name # 62: 
hntbw
Enter name # 63: s
Enter name # 64: n
Enter name # 65: um
Enter name # 66: 
rb
Enter name # 67: v
Enter name # 68: yr
Enter name # 69: by
Enter name # 70: v
Enter name # 71: 
by
Enter name # 72: treb
Enter name # 73: unbv
Enter name # 74: wr
Enter name # 75: bnku
Enter name # 76: ,
Enter name # 77: bni
Enter name # 78: mu
Enter name # 79: m
Enter name # 80: nb
Enter name # 81: v
Enter name # 82: wc
Enter name # 83: q
Enter name # 84: w
Enter name # 85: y
Enter name # 86: n
Enter name # 87: yr
Enter name # 88: t
Enter name # 89: 
n
Enter name # 90: n
Enter name # 91: nnyi
Enter name # 92: m
Enter name # 93: u
Enter name # 94:
u
Enter name # 95: um
Enter name # 96: i
Enter name # 97: 
ui
Enter name # 98: mmyuy
Enter name # 99: t
Enter name # 100:
c

dffg
asgf
sgeg
fastgw
g
eshg
geshe
gsdhb
hbsdhe
bsdhrh
greh
ehr
ehere
hgrh
ttrth
rjnhtrj
t
jr
tjtr
jtr
h
rt
rth
rth
rtj
rt
jr
hr
tj
rjetgqw
r
23
r2
3t2
t
t
76
t
k
dj
dj
d5j
-1
1wxcx
xdxc
x
crw
xrc
cefc
c
c
f
cfc
c
fx
cfx3aefyt
uyujp
ebr
wrv
vw
v
hntbw
s
n
um
rb
v
yr
by
v
by
treb
unbv
wr
bnku
,
bni
mu
m
nb
v
wc
q
w
y
n
yr
t
n
n
nnyi
m
u
u
um
i
ui
mmyuy
t
c*/