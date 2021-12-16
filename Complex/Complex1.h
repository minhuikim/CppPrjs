#ifndef COMPLEX1_H_INCLUDED
#define COMPLEX1_H_INCLUDED

class Complex1 {
	double rPart, iPart;	// rPart : �Ǽ���  /  iPart : �����

public :
	// ������
	Complex1(double r = 0, double i = 0) : rPart(r), iPart(i) {}	// �Ǽ��θ� r, ����θ� i�� �ʱ�ȭ
	Complex1 conj() const {									// ������� ��ȣ�� �ٲ� �ӷ����Ҽ� ��ü�� ���Ͽ� ��ȯ�Ѵ�.
		return Complex1(rPart, -iPart);
	}

	// ��ü �ڽŰ� �μ��� ���޵� ���Ҽ� ��üc�� ���� �� ������ ����, ���Ҽ� ��ü�� ��ȯ
	// �Ǽ��δ� �Ǽ��γ���, ����δ� ����� ���� ���
	Complex1 add(const Complex1& c) const {
		return Complex1(rPart + c.rPart, iPart + c.iPart);
	}
	Complex1 sub(const Complex1& c) const {
		return Complex1(rPart - c.rPart, iPart - c.iPart);
	}

	// ��ü �ڽŰ� �μ��� ���޵� ���Ҽ� ��ü c�� ������ ������� �ش�Ǵ� ���Ҽ� ��ü ��ȯ
	Complex1 mul(const Complex1& c) const;
	Complex1 div(const Complex1& c) const;
	void display() const;					// ���Ҽ� ���� ���
};

#endif 
