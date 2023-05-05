#include <bits/stdc++.h>

using namespace std;

class String {
public:
    unsigned long int sz = 0;
    unsigned long int cap = 0;
    char* self = nullptr;

    String(const char* a) : sz(strlen(a)), cap(sz), self(new char[sz + 1]) {
        memcpy(self, a, sz);
        self[sz] = '\0';
    }

    String(char c) : sz(1), cap(1) {
        self = new char[sz + 1];
        self[0] = c;
        self[1] = '\0';
    }

    String(unsigned long int n, char c) : sz(n), cap(n) {
        self = new char[sz + 1];
        std::memset(self, c, n);
        self[sz] = '\0';
    }

    String(const String& s) : sz(s.sz), cap(s.cap),
        self(new char[s.cap + 1]) {
        memcpy(self, s.self, sz + 1);
    }

    String() : sz(0), cap(0) {
        char* self = new char[1];
        self[0] = '\0';
    };

    ~String() {
        delete[] self;
    }

    long unsigned int size() const {
        return sz;
    }

    long unsigned int length() const {
        return sz;
    }

    long unsigned int capacity() const {
        return cap;
    }

    void pop_back() {
        self[--sz] = '\0';
    }

    void push_back(const char c) {
        if (sz >= cap) {
            char temp[cap];
            memcpy(temp, self, sz);
            delete[] self;
            cap *= 2;
            if (cap == 0) {
                cap = 1;
            }
            self = new char[cap + 1];
            memcpy(self, temp, sz);
        }
        self[sz] = c;
        self[++sz] = '\0';
    }

    char& front() {
        return self[0];
    }

    const char& front() const {
        return self[0];
    }

    char& back() {
        return self[sz - 1];
    }

    const char& back() const {
        return self[sz - 1];
    }

    String& operator+=(const char s) {
        this->push_back(s);
        return *this;
    }

    String& operator+=(const String& s) {
        if (sz + s.sz > cap) {
            char temp[cap];
            memcpy(temp, self, sz);
            cap += s.cap;
            delete[] self;
            self = new char[cap + 1];
            memcpy(self, temp, sz);
        }
        memcpy(self + sz, s.self, s.sz);
        sz += s.sz;
        self[sz] = '\0';
        return *this;
    }

    String& operator=(String s) {
        swap(s);
        return *this;
    }

    bool empty() const {
        return sz == 0;
    }

    void clear() {
        sz = 0;
        if (self != nullptr) {
            self[sz] = '\0';
        }
    }

    String substr(const unsigned long int start, const unsigned long int count) const {
        String result(count, '\0');
        memcpy(result.self, self + start, count);
        return result;
    }

    char* data() {
        return &self[0];
    }

    const char* data() const {
        return &self[0];
    }

    void shrink_to_fit() {
        cap = sz;
        char temp[cap];
        memcpy(temp, self, sz);
        delete[] self;
        self = new char[cap + 1];
        memcpy(self, temp, sz);
        self[sz] = '\0';
    }

    long unsigned int find(const String& s) const {
        for (unsigned long int i = 0; i < sz - s.sz; ++i) {
            for (unsigned long int j = 0; j < s.sz; ++j) {
                if (self[i + j] != s.self[j]) {
                    break;
                }
                if (j == s.sz - 1) {
                    return i;
                }
            }
        }
        return this->length();
    }

    long unsigned int rfind(const String& s) const {
        for (unsigned long int i = 0; i < sz - s.sz; ++i) {
            for (unsigned long int j = 0; j < s.sz; ++j) {
                if (self[sz - 1 - (i + j)] != s.self[s.sz - j]) {
                    break;
                }
                if (j == s.sz - 1) {
                    return sz - s.sz - i;
                }
            }
        }
        return this->length();
    }

    void swap(String& s) {
        std::swap(self, s.self);
        std::swap(sz, s.sz);
        std::swap(cap, s.cap);
    }

    char& operator[](int index) {
        return self[index];
    }

    const char& operator[](int index) const {
        return self[index];
    }
};

String operator+(const String& a, const String& b) {
    String result = a;
    result += b;
    return result;
}

String operator+(const char c, const String& a) {
    String result = a;
    result.push_back(c);
    return result;
}

String operator+(const String& a, const char c) {
    String result = a;
    result.push_back(c);
    return result;
}

bool operator==(const String& a, const String& b) {
    if (a.sz != b.sz) {
        return false;
    }
    for (unsigned long int i = 0; i < a.sz; ++i) {
        if (a.self[i] != b.self[i]) {
            return false;
        }
    }
    return true;
}

bool operator!=(const String& a, const String& b) {
    return !(a == b);
}

bool operator<(const String& a, const String& b) {
    for (unsigned long int i = 0; i < std::min(a.sz, b.sz); ++i) {
        if (a.self[i] < b.self[i]) {
            return true;
        }
        else if (a.self[i] > b.self[i]) {
            return false;
        }
    }
    return a.sz < b.sz;
}

bool operator>=(const String& a, const String& b) {
    return !(a < b);
}

bool operator>(const String& a, const String& b) {
    return b < a;
}

bool operator<=(const String& a, const String& b) {
    return !(b > a);
}

std::ostream& operator<<(std::ostream& out, const String& s) {
    out << s.self;
    return out;
}

std::istream& operator>>(std::istream& in, String& s) {
    char c;
    s.clear();
    in.get(c);
    while ((c != '\0') && (c != ' ') && (!in.eof()) && (c != '\n')) {
        s.push_back(c);
        in.get(c);
    }
    return in;
}

int main() {
    std::ios::sync_with_stdio(false);
    long long b, pos, n, k, su1, su2;
    String s, s1, r, str;
    vector<long long> op;
    //set <int, greater<int>> st;
    set<int> st;
    queue<int> q;
    const String al = "abcdefghijklmnopqrstuvwxyz";

    cin >> n;

    long long x, y;

    const double pi = 3.14159265358979323846;

    cout.precision(10);

    for (int i = 1; i <= n; i++) 
    {
        cin >> x >> y;
        
        if (atan2(y, x) < 0)
            cout << atan2(y, x) + 2 * pi << '\n';
        else
            cout << atan2(y, x) << '\n';
    }

    return 0;
};
