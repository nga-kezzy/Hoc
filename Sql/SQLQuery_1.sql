CREATE DATABASE NGA_UDPM1
USE NGA_UDPM1
--TAO BANG DU LIEU--

CREATE TABLE Khach
	(MAKH		CHAR(5)		NOT NULL,
	HOTENKH		CHAR(20)	NOT NULL,
	DIACHI		CHAR(30)	NOT NULL,
	PRIMARY KEY		(MAKH))

CREATE TABLE Hoadon
	(MAKH		CHAR(5)		NOT NULL,
	SOHD		INTEGER		NOT NULL,
	NGAYLAP		DATE		NOT NULL,
	PRIMARY KEY (SOHD),
	FOREIGN KEY(MAKH) REFERENCES Khach)

CREATE TABLE Hang
	(MAH		CHAR(4)		NOT NULL,
	TENHANG		CHAR(16)	NOT NULL,
	DONGIA		DECIMAL(5)	NOT NULL,
	PRIMARY KEY (MAH))

CREATE TABLE DongHD
	(SOHD		INTEGER		NOT NULL,
	MAH			CHAR(4)		NOT NULL,
	SL			DECIMAL(3)	
	PRIMARY KEY (SOHD,MAH),
	FOREIGN KEY(SOHD) REFERENCES Hoadon,
	FOREIGN KEY(MAH) REFERENCES Hang)


INSERT INTO Khach(MAKH,HOTENKH,DIACHI)
VALUES
('C005','Le Hoai Nam','Hoan Kiem Ha Noi'),
('D010','Ngguyen Thanh Hung','Hai Ba Trung Ha Noi'),
('G001','Pham Hoang An','Le Chan Hai Phong');

insert into Hoadon(MAKH,SOHD,NGAYLAP)
values
('C005',2001,'04/08/2012'),
('C005',2002,'05/16/2012'),
('D010',2101,'05/18/2012'),
('G001',2201,'05/22/2012');

INSERT INTO Hang (MAH,TENHANG,DONGIA)
VALUES
('PR1','May in laser',300),
('PX0','Máy in HP',450),
('Q91','Đĩa cứng ', 560),
('S00','Màn hình 17',280);

insert into DongHD(SOHD,MAH,SL)
values 
(2001,'PR1',20),
(2001,'PX0',15),
(2002,'Q91',10),
(2002,'S00',5),
(2101,'PX0',30),
(2101,'S00',6),
(2201,'Q91',16);


--cho biết mã và họ tên của khách hàng--
SELECT MAKH,HOTENKH from Khach;

--cho biết thông tin về khách hàng--
SELECT * FROM Khach;

--cho biết mã của khách hàng đã mua hàng tại cửa hàng--
SELECT DISTINCT (MAkh) FROM Hoadon;

--cho biết đơn giá của các mặt hàng  đc kinh doanh--
SELECT TENHANG,DONGIA FROM Hang;

--Hiện tên khách hàng b=và số hóa đơn của khách hàng đó--
SELECT HOTENKH,SOHD FROM Khach, Hoadon 
WHERE Khach.Makh=Hoadon.Makh; 

--HIện thông tin về các mặt hàng có đươn giá > 400--
SELECT * FROM Hang WHERE DONGIA>400;

--cho biết mã khách hàng và số hóa đơn cảu khách hàng sau ngày 16/05/2012
SELECT MAKH,SOHD,NGAYLAP FROM Hoadon 
WHERE NGAYLAP>'05/16/2012';