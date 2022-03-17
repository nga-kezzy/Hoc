/*
   - Nguyễn Văn Ngà
    - Udpm1 k12
    - Mssv : CD200163
    - STT : 37
    - Nhóm 1:
*/
CREATE DATABASE Bai5_6
USE Bai5_6

----- Tạo bảng dữ liệu ------
CREATE TABLE Phim
(
    MASOPHIM    CHAR(10)     NOT NULL,
    TENPHIM     CHAR(30)    NOT NULL,
    NAMSX       INTEGER        NOT NULL,
    DODAI       DECIMAL    NOT NULL,
    THELOAI     CHAR(15)        NOT NULL, 
    PRIMARY KEY (MASOPHIM)
);

--Nhập dl cho bảng phim --
INSERT INTO Phim(MASOPHIm,TENPHIM,NAMSX,DODAI,THELOAI)
VALUES
('p1','Vincenzo',2020,2.5,'Hanh dong'),
('p2','star war',2019,1.5,'Vien tuong'),
('p3','Nguoi nhen',2018,1.3,'Hanh dong'),
('p4','Tuong da',2019,1.5,'Lang man');

CREATE TABLE DienVien
(
    MADV        CHAR(5)     NOT NULL,
    HOTEN       CHAR(30)    NOT NULL,
    DIACHI      CHAR(30)    NOT NULL,
    NGAYSINH    DATE
    PRIMARY KEY(MADV)
);

---Nhập dl cho bảng Dien Vien ---

INSERT INTO DienVien(MADV, HOTEN, DIACHI, NGAYSINH)
values
('DV1','Jackie Chan','New York','1954-4-7'),
('DV2','Brad Pitt','New York','1964-8-7'),
('DV3','Jay Chou','New York','1970-10-7'),
('DV4','Angelina Jolie','New York','1949-12-7');

CREATE TABLE ThamGiaDien
(
    MADV           CHAR(5)         NOT NULL,
    MASOPHIM        CHAR(10)        NOT NULL,
    VAI             CHAR(30)        NOT NULL,
    THOILUONG       DECIMAL         NOT NULL,

    PRIMARY KEY(MADV,MASOPHIM),
    FOREIGN KEY (MASOPHIM) REFERENCES Phim,
    FOREIGN KEY(MADV)       REFERENCES DienVien,
);

INSERT INTO ThamGiaDien(MADV, MASOPHIM, VAI, THOILUONG)
VALUES
('DV1','p1','Nguyen Van A','12.5'),
('DV2','p2','Nguyen Van B','10.4'),
('DV3','p3','Nguyen Van C','16.6'),
('DV4','p4','Nguyen Van D','22.2');

--Câu1
-- ds các diễn viên tham gia diễn  các bộ phim từ 2010 đến nay--
SELECT HOTEN,TENPHIM,VAI
FROM DienVien, Phim, ThamGiaDien
WHERE ThamGiaDien.MASOPHIM = Phim.MASOPHIM 
AND     ThamGiaDien.MADV = DienVien.MADV 
AND NAMSX>2010;

--Câu 2
--cho biết ds các dv tham gia dien the loai phim hanh dong--
SELECT HOTEN,TENPHIM,VAI
FROM DienVien, Phim, ThamGiaDien
WHERE ThamGiaDien.MASOPHIM = Phim.MASOPHIM
AND ThamGiaDien.MADV = DienVien.MADV
AND Phim.THELOAI = 'hanh dong';

--Câu 3
-- Đếm số phim theo tưng the loai phim, theo số luong phim và thể loại phim--
SELECT THELOAI, COUNT(MASOPHIM) as [MA SO PHIM]
FROM Phim
WHERE NAMSX>2006
GROUP BY THELOAI;


--Câu 4
-- cho biết tên dv, tên phim mà sv đó đóng mà thời lượng bằng thời lượng dài nhất --

SELECT HOTEN, TENPHIM, THOILUONG
FROM DienVien, Phim,ThamGiaDien
WHERE ThamGiaDien.MASOPHIM = Phim.MASOPHIM
AND ThamGiaDien.MADV = DienVien.MADV
AND THOILUONG = (Select max(THOILUONG)FROM ThamGiaDien);  