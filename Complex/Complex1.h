#ifndef COMPLEX1_H_INCLUDED
#define COMPLEX1_H_INCLUDED

class Complex1 {
	double rPart, iPart;	// rPart : 실수부  /  iPart : 허수부

public :
	// 생성자
	Complex1(double r = 0, double i = 0) : rPart(r), iPart(i) {}	// 실수부를 r, 허수부를 i로 초기화
	Complex1 conj() const {									// 허수부의 부호를 바꾼 켤레복소수 객체를 구하여 반환한다.
		return Complex1(rPart, -iPart);
	}

	// 객체 자신과 인수로 전달된 복소수 객체c의 덧샘 및 뺄샘을 수행, 복소수 객체를 반환
	// 실수부는 실수부끼리, 허수부는 허수부 끼리 계산
	Complex1 add(const Complex1& c) const {
		return Complex1(rPart + c.rPart, iPart + c.iPart);
	}
	Complex1 sub(const Complex1& c) const {
		return Complex1(rPart - c.rPart, iPart - c.iPart);
	}

	// 객체 자신과 인수로 전달된 복소수 객체 c로 나누어 결과값에 해당되는 복소수 객체 반환
	Complex1 mul(const Complex1& c) const;
	Complex1 div(const Complex1& c) const;
	void display() const;					// 복소수 값을 출력
};

#endif 
