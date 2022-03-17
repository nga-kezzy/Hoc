CREATE DATABASE Vinamilk
USE Vinamilk

--Tạo bảng dữ liệu

CREATE TABLE NguyenLieu
(
    MaNL        CHAR(10)    NOT NULL,
    TenNL       CHAR(20)    NOT NULL,
    Donvi       CHAR(10)    NOT NULL,
    PRIMARY KEY (MaNL),
);

INSERT INTO NguyenLieu(MaNL, TenNL, Donvi)
VALUES
('NL1','duong','kg'),
('NL2','tinh bot','kg'),
('NL3','huong lieu','kg'),
('NL4','bot mi','kg');

CREATE TABLE DoanhNghiep
(
    MaDN        CHAR(10)    NOT NULL,
    TenDN       CHAR(30)    NOT NULL,
    Tel         CHAR(15)    NOT NULL,
    DiaChi      CHAR(25)    NOT NULL,
    PRIMARY KEY (MaDN),
);

INSERT INTO DoanhNghiep(MaDN,TenDN, Tel, DiaChi)
VALUES
('DN1', 'Cty A', '0377422467', 'Ha Noi'),
('DN2', 'Cty B', '0378422447', 'Hue'),
('DN3', 'Cty C', '0395452467', 'Hai PHong'),
('DN4', 'Cty D', '0797222367', 'Thai Binh');

CREATE TABLE Nhap
(
    MaDN        CHAR(10)    NOT NULL,
    MaNL        CHAR(10)    NOT NULL,
    NgayNhap    DATE        NOT NULL,
    SoLuong     INTEGER      NOT NULL,
    PRIMARY KEY (MaDN, MaNL),
    FOREIGN KEY (MaDN) REFERENCES DoanhNghiep,
    FOREIGN KEY (MaNL) REFERENCES NguyenLieu,
);

INSERT INTO Nhap(MaDN, MaNL,NgayNhap, SoLuong)
VALUES
('DN3','NL3','2020-8-17','1000'),
('DN2','NL1','2020-1-28','100'),
('DN1','NL4','2020-12-05','2000'),
('DN4','NL2','2020-9-27','600');

-- các donh nghiep cung cấp nguyên liệu cho công ty

SELECT * FROM DoanhNghiep;

--cho biết tên nguyên liêu nhập từ doanh nghiệp có mã là DN3

SELECT TenNL FROM NguyenLieu, DoanhNghiep, Nhap
WHERE Nhap.MaDN = DoanhNghiep.MaDN
AND   Nhap.MaNL = NguyenLieu.MaNL
AND   DoanhNghiep.MaDN = 'DN3';

--cho biet tên và địa chỉ doanh nghiệp đã cung cấp đương vào ngày 28/1/2020

SELECT TenDN,DiaChi FROM NguyenLieu, DoanhNghiep, Nhap
WHERE Nhap.MaDN = DoanhNghiep.MaDN
AND   Nhap.MaNL = NguyenLieu.MaNL
AND TenNL='duong'
AND NgayNhap='2020-1-28';