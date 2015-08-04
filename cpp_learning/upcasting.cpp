#include<iostream>
#include<cstdio>
using namespace std;
enum note {middleC=0, Csharp, Cflat};
class Instrument {
public:
	virtual void play(note) const {           //it no virtual words ,there will print Instrument::play
		cout<<"Instrument::play"<<endl;
	}
};
class Wind:public Instrument {
	void play(note) const { 
		cout<<"Wind::play"<<endl;
	}
};

void tune(Instrument& i) {
	i.play(middleC);
}
/*
int main() {
	Wind flute;
	tune(flute);   //upcasting
}
*/