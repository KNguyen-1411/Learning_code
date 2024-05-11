CREATE TABLE [dbo].[KHOA]
(
	[MAKHOA] [nvarchar](5) NOT NULL,
	[TENKHOA] [nvarchar](50) NOT NULL,
	[DIENTHOAI] [nvarchar](15) NULL,
	CONSTRAINT [PK_KHOA] PRIMARY KEY CLUSTERED 
	(
		[MAKHOA] ASC
	) ON [PRIMARY]
) 
ON [PRIMARY]
GO

CREATE TABLE [dbo].[LOP]
(
	[MALOP] [nvarchar](10) NOT NULL,
	[TENLOP] [nvarchar](30) NULL,
	[KHOA] [smallint] NULL,
	[HEDAOTAO] [nvarchar](25) NULL,
	[NAMNHAPHOC] [int] NULL,
	[SISO] [int] NULL,
	[MAKHOA] [nvarchar](5) NULL,
	CONSTRAINT [PK_LOP] PRIMARY KEY CLUSTERED 
	(
		[MALOP] ASC
	) ON [PRIMARY]
) 
ON [PRIMARY]
GO

CREATE TABLE [dbo].[MONHOC]
(
	[MAMONHOC] [nvarchar](10) NOT NULL,
	[TENMONHOC] [nvarchar](50) NOT NULL,
	[SODVHT] [smallint] NOT NULL,
	CONSTRAINT [PK_MONHOC] PRIMARY KEY CLUSTERED 
	(
		[MAMONHOC] ASC
	) ON [PRIMARY]
) 
ON [PRIMARY]
GO

CREATE TABLE [dbo].[SINHVIEN]
(
	[MASV] [nvarchar](10) NOT NULL,
	[HODEM] [nvarchar](25) NOT NULL,
	[TEN] [nvarchar](10) NOT NULL,
	[NGAYSINH] [smalldatetime] NULL,
	[GIOITINH] [bit] NULL,
	[NOISINH] [nvarchar](255) NULL,
	[MALOP] [nvarchar](10) NULL,
	CONSTRAINT [PK_SINHVIEN] PRIMARY KEY CLUSTERED 
	(
		[MASV] ASC
	) ON [PRIMARY]
) 
ON [PRIMARY]
GO

CREATE TABLE [dbo].[DIEMTHI]
(
	[MAMONHOC] [nvarchar](10) NOT NULL,
	[MASV] [nvarchar](10) NOT NULL,
	[DIEMLAN1] [numeric](5, 2) NULL,
	[DIEMLAN2] [numeric](5, 2) NULL,
	CONSTRAINT [PK_DIEMTHI] PRIMARY KEY CLUSTERED 
	(
		[MAMONHOC] ASC,
		[MASV] ASC
	) ON [PRIMARY]
) 
ON [PRIMARY]
GO


ALTER TABLE [dbo].[DIEMTHI]  WITH CHECK ADD  CONSTRAINT [FK_DIEMTHI_MONHOC1] 
FOREIGN KEY([MAMONHOC]) REFERENCES [dbo].[MONHOC] ([MAMONHOC])
ON UPDATE CASCADE
GO

ALTER TABLE [dbo].[DIEMTHI] CHECK CONSTRAINT [FK_DIEMTHI_MONHOC1]
GO

ALTER TABLE [dbo].[DIEMTHI]  WITH CHECK ADD  CONSTRAINT [FK_DIEMTHI_SINHVIEN] 
FOREIGN KEY([MASV]) REFERENCES [dbo].[SINHVIEN] ([MASV])
ON UPDATE CASCADE
ON DELETE CASCADE
GO

ALTER TABLE [dbo].[DIEMTHI] CHECK CONSTRAINT [FK_DIEMTHI_SINHVIEN]
GO

ALTER TABLE [dbo].[LOP]  WITH CHECK ADD  CONSTRAINT [FK_LOP_KHOA] 
FOREIGN KEY([MAKHOA]) REFERENCES [dbo].[KHOA] ([MAKHOA])
ON UPDATE CASCADE
ON DELETE CASCADE
GO

ALTER TABLE [dbo].[LOP] CHECK CONSTRAINT [FK_LOP_KHOA]
GO

ALTER TABLE [dbo].[SINHVIEN]  WITH CHECK ADD  CONSTRAINT [FK_SINHVIEN_LOP] 
FOREIGN KEY([MALOP]) REFERENCES [dbo].[LOP] ([MALOP])
ON UPDATE CASCADE
ON DELETE CASCADE
GO

ALTER TABLE [dbo].[SINHVIEN] CHECK CONSTRAINT [FK_SINHVIEN_LOP]
GO


SET NOCOUNT ON

INSERT [dbo].[KHOA] ([MAKHOA], [TENKHOA], [DIENTHOAI]) VALUES (N'DHT01', N'Khoa Toán cơ - Tin học', N'054822407')
INSERT [dbo].[KHOA] ([MAKHOA], [TENKHOA], [DIENTHOAI]) VALUES (N'DHT02', N'Khoa Công nghệ thông tin', N'054826767')
INSERT [dbo].[KHOA] ([MAKHOA], [TENKHOA], [DIENTHOAI]) VALUES (N'DHT03', N'Khoa Vật lý', N'054823462')
INSERT [dbo].[KHOA] ([MAKHOA], [TENKHOA], [DIENTHOAI]) VALUES (N'DHT04', N'Khoa Hoá học', N'054823951')
INSERT [dbo].[KHOA] ([MAKHOA], [TENKHOA], [DIENTHOAI]) VALUES (N'DHT05', N'Khoa Sinh học', N'054822934')
INSERT [dbo].[KHOA] ([MAKHOA], [TENKHOA], [DIENTHOAI]) VALUES (N'DHT06', N'Khoa Địa lý - Địa chất', N'054823837')
INSERT [dbo].[KHOA] ([MAKHOA], [TENKHOA], [DIENTHOAI]) VALUES (N'DHT07', N'Khoa Ngữ văn', N'054821133')
INSERT [dbo].[KHOA] ([MAKHOA], [TENKHOA], [DIENTHOAI]) VALUES (N'DHT08', N'Khoa Lịch sử', N'054823833')
INSERT [dbo].[KHOA] ([MAKHOA], [TENKHOA], [DIENTHOAI]) VALUES (N'DHT09', N'Khoa Mác - Lê Nin', N'054825698')
INSERT [dbo].[KHOA] ([MAKHOA], [TENKHOA], [DIENTHOAI]) VALUES (N'DHT10', N'Khoa Luật', N'054821135')


INSERT [dbo].[LOP] ([MALOP], [TENLOP], [KHOA], [HEDAOTAO], [NAMNHAPHOC], [SISO], [MAKHOA]) VALUES (N'C24101', N'Toán K24', 24, N'Chính quy', 2000, 5, N'DHT01')
INSERT [dbo].[LOP] ([MALOP], [TENLOP], [KHOA], [HEDAOTAO], [NAMNHAPHOC], [SISO], [MAKHOA]) VALUES (N'C24102', N'Tin K24', 24, N'Chính quy', 2000, 8, N'DHT02')
INSERT [dbo].[LOP] ([MALOP], [TENLOP], [KHOA], [HEDAOTAO], [NAMNHAPHOC], [SISO], [MAKHOA]) VALUES (N'C24103', N'Lý K24', 24, N'Chính quy', 2000, 7, N'DHT03')
INSERT [dbo].[LOP] ([MALOP], [TENLOP], [KHOA], [HEDAOTAO], [NAMNHAPHOC], [SISO], [MAKHOA]) VALUES (N'C24301', N'Sinh K24', 24, N'Chính quy', 2000, 5, N'DHT05')
INSERT [dbo].[LOP] ([MALOP], [TENLOP], [KHOA], [HEDAOTAO], [NAMNHAPHOC], [SISO], [MAKHOA]) VALUES (N'C25101', N'Toán K25', 25, N'Chính quy', 2001, 5, N'DHT01')
INSERT [dbo].[LOP] ([MALOP], [TENLOP], [KHOA], [HEDAOTAO], [NAMNHAPHOC], [SISO], [MAKHOA]) VALUES (N'C25102', N'Tin K25', 25, N'Chính quy', 2001, 6, N'DHT02')
INSERT [dbo].[LOP] ([MALOP], [TENLOP], [KHOA], [HEDAOTAO], [NAMNHAPHOC], [SISO], [MAKHOA]) VALUES (N'C25103', N'Lý K25', 25, N'Chính quy', 2001, 6, N'DHT03')
INSERT [dbo].[LOP] ([MALOP], [TENLOP], [KHOA], [HEDAOTAO], [NAMNHAPHOC], [SISO], [MAKHOA]) VALUES (N'C25301', N'Sinh K25', 25, N'Chính quy', 2001, 8, N'DHT05')
INSERT [dbo].[LOP] ([MALOP], [TENLOP], [KHOA], [HEDAOTAO], [NAMNHAPHOC], [SISO], [MAKHOA]) VALUES (N'C26101', N'Toán K26', 26, N'Chính quy', 2002, 5, N'DHT01')
INSERT [dbo].[LOP] ([MALOP], [TENLOP], [KHOA], [HEDAOTAO], [NAMNHAPHOC], [SISO], [MAKHOA]) VALUES (N'C26102', N'Tin K26', 26, N'Chính quy', 2002, 5, N'DHT02')

INSERT [dbo].[MONHOC] ([MAMONHOC], [TENMONHOC], [SODVHT]) VALUES (N'HO-001', N'Hoá đại cương', 3)
INSERT [dbo].[MONHOC] ([MAMONHOC], [TENMONHOC], [SODVHT]) VALUES (N'TI-001', N'Tin học đại cương', 4)
INSERT [dbo].[MONHOC] ([MAMONHOC], [TENMONHOC], [SODVHT]) VALUES (N'TI-002', N'Ngôn ngữ C', 5)
INSERT [dbo].[MONHOC] ([MAMONHOC], [TENMONHOC], [SODVHT]) VALUES (N'TI-003', N'Lý thuyết hệ điều hành', 4)
INSERT [dbo].[MONHOC] ([MAMONHOC], [TENMONHOC], [SODVHT]) VALUES (N'TI-004', N'Cấu trúc dữ liệu và giải thuật', 4)
INSERT [dbo].[MONHOC] ([MAMONHOC], [TENMONHOC], [SODVHT]) VALUES (N'TO-001', N'Đại số tuyến tính', 4)
INSERT [dbo].[MONHOC] ([MAMONHOC], [TENMONHOC], [SODVHT]) VALUES (N'TO-002', N'Giải tích 1', 4)
INSERT [dbo].[MONHOC] ([MAMONHOC], [TENMONHOC], [SODVHT]) VALUES (N'TO-003', N'Bài tập Đại số', 2)
INSERT [dbo].[MONHOC] ([MAMONHOC], [TENMONHOC], [SODVHT]) VALUES (N'TO-004', N'Bài tập Giải tích 1', 2)
INSERT [dbo].[MONHOC] ([MAMONHOC], [TENMONHOC], [SODVHT]) VALUES (N'VL-001', N'Vật lý đại cương', 3)

INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241010001', N'Ngô Thị Nhật', N'Anh', CAST(N'1982-11-27 00:00:00' AS SmallDateTime), 0, N'Quảng Ninh, Quảng Bình ', N'C24101')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241010002', N'Nguyễn Thị Ngọc', N'Anh', CAST(N'1983-03-21 00:00:00' AS SmallDateTime), 0, N'Tân Kỳ, Nghệ An ', N'C24101')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241010003', N'Ngô Việt', N'Bắc', CAST(N'1982-05-11 00:00:00' AS SmallDateTime), 1, N'Yên Khánh, Ninh Bình', N'C24101')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241010004', N'Nguyễn Đình', N'Bình', CAST(N'1982-10-06 00:00:00' AS SmallDateTime), 1, N'Huế', N'C24101')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241010005', N'Hồ Đăng', N'Chiến', CAST(N'1982-01-20 00:00:00' AS SmallDateTime), 1, N'Phong Điền, TTHuế ', N'C24101')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241020001', N'Nguyễn Tuấn', N'Anh', CAST(N'1979-07-15 00:00:00' AS SmallDateTime), 1, N' Do Linh, Quảng Trị ', N'C24102')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241020002', N'Trần Thị Kim', N'Anh', CAST(N'1982-11-04 00:00:00' AS SmallDateTime), 0, N'Phong Điền, TTHuế ', N'C24102')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241020003', N'Võ Đức', N'Ân', CAST(N'1982-05-24 00:00:00' AS SmallDateTime), 1, N'Huế', N'C24102')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241020004', N'Nguyễn Công', N'Bình', CAST(N'1979-06-06 00:00:00' AS SmallDateTime), 1, N'Thăng Bình, Quảng Nam', N'C24102')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241020005', N'Nguyễn Thanh', N'Bình', CAST(N'1982-04-24 00:00:00' AS SmallDateTime), 1, N'Huế', N'C24102')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241020006', N'Lê Thị Thanh', N'Châu', CAST(N'1982-05-25 00:00:00' AS SmallDateTime), 0, N'Huế', N'C24102')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241020007', N'Bùi Đình', N'Chiến', CAST(N'1981-04-07 00:00:00' AS SmallDateTime), 1, N'Đồng Hới, Quảng Bình', N'C24102')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241020008', N'Nguyễn Công ', N'Chính', CAST(N'1981-11-01 00:00:00' AS SmallDateTime), 1, N'Đông Hưng, Thái Bình', N'C24102')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241030001', N'Trần Nguyễn Quang', N'Anh', CAST(N'1981-07-10 00:00:00' AS SmallDateTime), 1, N'Huế', N'C24103')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241030002', N'Võ Minh', N'Bảo', CAST(N'1981-10-24 00:00:00' AS SmallDateTime), 1, N'Lệ Thuỷ, Quảng Bình', N'C24103')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241030003', N'Nguyễn Phi', N'Bằng', CAST(N'1980-11-25 00:00:00' AS SmallDateTime), 1, N'Hải Lăng, Quảng Trị', N'C24103')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241030004', N'Nguyễn Thành ', N'Bửu', CAST(N'1980-10-02 00:00:00' AS SmallDateTime), 1, N'Hướng Hoá, Quảng Trị', N'C24103')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241030005', N'Bùi Lê Tuấn', N'Cường', CAST(N'1982-06-12 00:00:00' AS SmallDateTime), 1, N'Phú Lộc, TTHuế ', N'C24103')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241030006', N'Nguyễn Thế', N'Doãn', CAST(N'1982-01-02 00:00:00' AS SmallDateTime), 1, N'Quảng Trạch, Quảng Bình ', N'C24103')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0241030007', N'Hà Tiến', N'Dũng', CAST(N'1982-08-01 00:00:00' AS SmallDateTime), 1, N'Phú Lộc, TTHuế ', N'C24103')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0243010001', N'Lê Thị', N'Anh', CAST(N'1980-10-12 00:00:00' AS SmallDateTime), 0, N'Hương Trà, TTHuế', N'C24301')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0243010002', N'Nguyễn Hữu Thuần', N'Anh', CAST(N'1982-07-27 00:00:00' AS SmallDateTime), 0, N'Huế', N'C24301')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0243010003', N'Nguyễn Tuấn', N'Anh', CAST(N'1982-02-08 00:00:00' AS SmallDateTime), 1, N'Tĩnh Gia, Thanh Hoá', N'C24301')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0243010004', N'Hoàng Thế', N'Chiến', CAST(N'1978-10-27 00:00:00' AS SmallDateTime), 1, N'Quảng Xương, Thanh Hoá', N'C24301')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0243010005', N'Nguyễn  Thiện', N'Chiến', CAST(N'1982-09-25 00:00:00' AS SmallDateTime), 1, N'Tuy Phước, Bình Định', N'C24301')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0251010001', N'Nguyễn Ngọc', N'Chinh', CAST(N'1983-11-05 00:00:00' AS SmallDateTime), 1, N'Quảng Nam Đà Nẵng', N'C25101')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0251010002', N'Huỳnh Thị Yến ', N'Giang', CAST(N'1983-05-20 00:00:00' AS SmallDateTime), 0, N'Hoà Vang - Đà Nẵng', N'C25101')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0251010003', N'Đoàn Thanh', N'Hải', CAST(N'1982-11-04 00:00:00' AS SmallDateTime), 1, N'ĐăkTô - Kontum', N'C25101')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0251010004', N'Nguyễn Thị Thanh', N'Hoa', CAST(N'1982-10-15 00:00:00' AS SmallDateTime), 0, N'Kỳ Anh - Hà Tĩnh', N'C25101')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0251010005', N'Nguyễn Thị Kiều', N'Lan', CAST(N'1982-02-25 00:00:00' AS SmallDateTime), 0, N'BV. Hà Lan - Quảng Trị', N'C25101')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0251010006', N'Hoàng Văn', N'Vinh', CAST(N'1980-03-02 00:00:00' AS SmallDateTime), 1, N'Huế', N'C25101')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0251020001', N'Dương Văn', N'Anh', CAST(N'1983-01-24 00:00:00' AS SmallDateTime), 1, N'Hương Phú - TTHuế', N'C25102')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0251020002', N'Nguyễn Hoàng', N'Anh', CAST(N'1983-04-27 00:00:00' AS SmallDateTime), 0, N'Tp. Huế', N'C25102')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0251020003', N'Nguyễn Thế', N'Anh', CAST(N'1983-01-26 00:00:00' AS SmallDateTime), 1, N'BV trung ương Huế', N'C25102')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0251020004', N'Nguyễn Thị Lan', N'Anh', CAST(N'1983-08-01 00:00:00' AS SmallDateTime), 0, N'Cam Lộ - Quảng Trị', N'C25102')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0251020005', N'Võ Thị Kim', N'Anh', CAST(N'1983-07-10 00:00:00' AS SmallDateTime), 0, N'BV khu vực 3 Huế', N'C25102')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0251020006', N'Hoàng Nhân', N'Ái', CAST(N'1981-05-11 00:00:00' AS SmallDateTime), 1, N'Tuyên Hoá, Quảng Bình', N'C25102')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0251030001', N'Nguyễn Văn', N'Ba', CAST(N'1980-10-05 00:00:00' AS SmallDateTime), 1, N'Nam Đàn, Nghệ An', N'C25103')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0251030002', N'Lê Văn Khoa', N'Bảo', CAST(N'1983-09-20 00:00:00' AS SmallDateTime), 1, N'Nghĩa Bình', N'C25103')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0251030003', N'Nguyễn Lương Ngọc', N'Bảo', CAST(N'1983-09-13 00:00:00' AS SmallDateTime), 1, N'Huế', N'C25103')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0251030004', N'Châu Văn Quốc', N'Bình', CAST(N'1983-02-20 00:00:00' AS SmallDateTime), 1, N'Phú Thượng, Huế', N'C25103')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0251030005', N'Võ Chí ', N'Cương', CAST(N'1983-05-22 00:00:00' AS SmallDateTime), 1, N'Triệu Hải, Quảng Trị', N'C25103')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0251030006', N'Lê Thị', N'Dí', CAST(N'1981-03-27 00:00:00' AS SmallDateTime), 0, N'Hương Phú, TTHuế', N'C25103')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0253010001', N'Phan Thế Nam', N'Anh', CAST(N'1982-06-14 00:00:00' AS SmallDateTime), 1, N'Huế', N'C25301')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0253010002', N'Phạm Thị Vân', N'Anh', CAST(N'1982-10-19 00:00:00' AS SmallDateTime), 0, N'Nghĩa Đàn, Nghệ An', N'C25301')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0253010003', N'Nguyễn Bá ', N'Biên', CAST(N'1983-05-19 00:00:00' AS SmallDateTime), 1, N'Yên Định, Thanh Hoá ', N'C25301')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0253010004', N'Hoàng Văn', N'Bình', CAST(N'1983-04-08 00:00:00' AS SmallDateTime), 1, N'Hà Trung, Thanh Hoá ', N'C25301')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0253010005', N'Nguyễn Thị', N'Bình', CAST(N'1981-10-20 00:00:00' AS SmallDateTime), 0, N'Quỳnh Lưu, Nghệ An', N'C25301')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0253010006', N'Lê Tất Uyên ', N'Châu', CAST(N'1983-11-09 00:00:00' AS SmallDateTime), 0, N'Huế', N'C25301')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0253010007', N'Đỗ Thị', N'Chung', CAST(N'1982-02-02 00:00:00' AS SmallDateTime), 0, N'Quảng Xương, Thanh Hoá', N'C25301')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0253010008', N'Trần Văn', N'Cường', CAST(N'1981-05-20 00:00:00' AS SmallDateTime), 1, N'Thanh Liêm, Nam hà', N'C25301')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0261010001', N'Lê Hoàng Phương ', N'Anh', CAST(N'1984-03-04 00:00:00' AS SmallDateTime), 0, N'Huế', N'C26101')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0261010002', N'Lê Thị Vân ', N'Anh', CAST(N'1984-10-14 00:00:00' AS SmallDateTime), 0, N'Thanh Hoá', N'C26101')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0261010003', N'Nguyễn Thị Lan', N'Anh', CAST(N'1983-04-24 00:00:00' AS SmallDateTime), 0, N'Nghệ An', N'C26101')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0261010004', N'Lê Đăng ', N'Ánh', CAST(N'1983-04-04 00:00:00' AS SmallDateTime), 1, N'Nghệ An', N'C26101')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0261010005', N'Lê Huy ', N'Đan', CAST(N'1982-09-09 00:00:00' AS SmallDateTime), 1, N'Hà Nội', N'C26101')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0261020001', N'Bùi Tuấn ', N'Anh', CAST(N'1983-03-01 00:00:00' AS SmallDateTime), 1, N'Đà nẵng', N'C26102')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0261020002', N'Lê Thúc Quốc', N'Anh', CAST(N'1984-12-04 00:00:00' AS SmallDateTime), 1, N'TTHuế', N'C26102')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0261020003', N'Nguyễn Thị Kim ', N'Anh', CAST(N'1983-06-29 00:00:00' AS SmallDateTime), 0, N'TTHuế', N'C26102')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0261020004', N'Nguyễn Thị Lan', N'Anh', CAST(N'1984-08-23 00:00:00' AS SmallDateTime), 1, N'Đà Nẵng', N'C26102')
INSERT [dbo].[SINHVIEN] ([MASV], [HODEM], [TEN], [NGAYSINH], [GIOITINH], [NOISINH], [MALOP]) VALUES (N'0261020005', N'Nguyễn Thị Lan', N'Anh', CAST(N'1984-07-25 00:00:00' AS SmallDateTime), 0, N'TTHuế', N'C26102')


INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-001', N'0241020001', CAST(1.00 AS Numeric(5, 2)), CAST(9.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-001', N'0241020002', CAST(6.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-001', N'0241020003', CAST(8.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-001', N'0241020004', CAST(8.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-001', N'0241020005', CAST(2.00 AS Numeric(5, 2)), CAST(9.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-001', N'0241020006', CAST(5.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-001', N'0241020007', CAST(8.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-001', N'0241020008', CAST(4.00 AS Numeric(5, 2)), CAST(3.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-001', N'0251020001', CAST(7.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-001', N'0251020002', CAST(6.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-001', N'0251020003', CAST(4.00 AS Numeric(5, 2)), CAST(7.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-001', N'0251020004', CAST(6.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-001', N'0251020005', CAST(4.00 AS Numeric(5, 2)), CAST(7.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-001', N'0251020006', CAST(10.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-001', N'0261020001', CAST(1.00 AS Numeric(5, 2)), CAST(2.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-001', N'0261020002', CAST(6.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-001', N'0261020003', CAST(0.00 AS Numeric(5, 2)), CAST(6.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-001', N'0261020004', CAST(10.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-001', N'0261020005', CAST(4.00 AS Numeric(5, 2)), CAST(5.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-002', N'0241020001', CAST(6.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-002', N'0241020002', CAST(8.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-002', N'0241020003', CAST(4.00 AS Numeric(5, 2)), CAST(3.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-002', N'0241020004', CAST(2.00 AS Numeric(5, 2)), CAST(5.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-002', N'0241020005', CAST(7.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-002', N'0241020006', CAST(2.00 AS Numeric(5, 2)), CAST(5.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-002', N'0241020007', CAST(9.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-002', N'0241020008', CAST(10.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-002', N'0251020001', CAST(4.00 AS Numeric(5, 2)), CAST(5.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-002', N'0251020002', CAST(10.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-002', N'0251020003', CAST(6.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-002', N'0251020004', CAST(2.00 AS Numeric(5, 2)), CAST(8.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-002', N'0251020005', CAST(5.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-002', N'0251020006', CAST(1.00 AS Numeric(5, 2)), CAST(3.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-002', N'0261020001', CAST(1.00 AS Numeric(5, 2)), CAST(9.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-002', N'0261020002', CAST(5.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-002', N'0261020003', CAST(4.00 AS Numeric(5, 2)), CAST(10.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-002', N'0261020004', CAST(8.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-002', N'0261020005', CAST(9.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-003', N'0241020001', CAST(2.00 AS Numeric(5, 2)), CAST(1.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-003', N'0241020002', CAST(5.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-003', N'0241020003', CAST(2.00 AS Numeric(5, 2)), CAST(7.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-003', N'0241020004', CAST(4.00 AS Numeric(5, 2)), CAST(1.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-003', N'0241020005', CAST(1.00 AS Numeric(5, 2)), CAST(5.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-003', N'0241020006', CAST(10.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-003', N'0241020007', CAST(10.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-003', N'0241020008', CAST(10.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-003', N'0251020001', CAST(1.00 AS Numeric(5, 2)), CAST(0.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-003', N'0251020002', CAST(5.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-003', N'0251020003', CAST(8.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-003', N'0251020004', CAST(3.00 AS Numeric(5, 2)), CAST(2.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-003', N'0251020005', CAST(1.00 AS Numeric(5, 2)), CAST(4.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-003', N'0251020006', CAST(8.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-003', N'0261020001', CAST(4.00 AS Numeric(5, 2)), CAST(9.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-003', N'0261020002', CAST(5.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-003', N'0261020003', CAST(2.00 AS Numeric(5, 2)), CAST(7.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-003', N'0261020004', CAST(0.00 AS Numeric(5, 2)), CAST(8.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-003', N'0261020005', CAST(3.00 AS Numeric(5, 2)), CAST(7.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-004', N'0241020001', CAST(7.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-004', N'0241020002', CAST(0.00 AS Numeric(5, 2)), CAST(7.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-004', N'0241020003', CAST(5.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-004', N'0241020004', CAST(7.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-004', N'0241020005', CAST(2.00 AS Numeric(5, 2)), CAST(5.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-004', N'0241020006', CAST(8.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-004', N'0241020007', CAST(6.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-004', N'0241020008', CAST(5.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-004', N'0251020001', CAST(9.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-004', N'0251020002', CAST(6.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-004', N'0251020003', CAST(5.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-004', N'0251020004', CAST(7.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-004', N'0251020005', CAST(9.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-004', N'0251020006', CAST(4.00 AS Numeric(5, 2)), CAST(3.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-004', N'0261020001', CAST(8.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-004', N'0261020002', CAST(5.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-004', N'0261020003', CAST(1.00 AS Numeric(5, 2)), CAST(10.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-004', N'0261020004', CAST(2.00 AS Numeric(5, 2)), CAST(9.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TI-004', N'0261020005', CAST(8.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-001', N'0241010001', CAST(6.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-001', N'0241010002', CAST(5.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-001', N'0241010003', CAST(4.00 AS Numeric(5, 2)), CAST(9.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-001', N'0241010004', CAST(6.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-001', N'0241010005', CAST(3.00 AS Numeric(5, 2)), CAST(9.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-001', N'0251010001', CAST(3.00 AS Numeric(5, 2)), CAST(8.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-001', N'0251010002', CAST(3.00 AS Numeric(5, 2)), CAST(8.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-001', N'0251010003', CAST(2.00 AS Numeric(5, 2)), CAST(7.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-001', N'0251010004', CAST(5.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-001', N'0251010005', CAST(2.00 AS Numeric(5, 2)), CAST(9.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-001', N'0261010001', CAST(7.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-001', N'0261010002', CAST(1.00 AS Numeric(5, 2)), CAST(5.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-001', N'0261010003', CAST(3.00 AS Numeric(5, 2)), CAST(5.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-001', N'0261010004', CAST(7.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-001', N'0261010005', CAST(9.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-002', N'0241010001', CAST(6.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-002', N'0241010002', CAST(4.00 AS Numeric(5, 2)), CAST(2.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-002', N'0241010003', CAST(4.00 AS Numeric(5, 2)), CAST(9.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-002', N'0241010004', CAST(8.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-002', N'0241010005', CAST(7.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-002', N'0251010001', CAST(5.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-002', N'0251010002', CAST(8.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-002', N'0251010003', CAST(8.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-002', N'0251010004', CAST(5.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-002', N'0251010005', CAST(4.00 AS Numeric(5, 2)), CAST(2.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-002', N'0261010001', CAST(9.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-002', N'0261010002', CAST(4.00 AS Numeric(5, 2)), CAST(7.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-002', N'0261010003', CAST(0.00 AS Numeric(5, 2)), CAST(3.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-002', N'0261010004', CAST(8.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-002', N'0261010005', CAST(5.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-003', N'0241010001', CAST(3.00 AS Numeric(5, 2)), CAST(4.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-003', N'0241010002', CAST(10.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-003', N'0241010003', CAST(2.00 AS Numeric(5, 2)), CAST(6.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-003', N'0241010004', CAST(8.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-003', N'0241010005', CAST(1.00 AS Numeric(5, 2)), CAST(5.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-003', N'0251010001', CAST(3.00 AS Numeric(5, 2)), CAST(1.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-003', N'0251010002', CAST(1.00 AS Numeric(5, 2)), CAST(8.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-003', N'0251010003', CAST(6.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-003', N'0251010004', CAST(5.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-003', N'0251010005', CAST(2.00 AS Numeric(5, 2)), CAST(6.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-003', N'0261010001', CAST(3.00 AS Numeric(5, 2)), CAST(9.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-003', N'0261010002', CAST(7.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-003', N'0261010003', CAST(5.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-003', N'0261010004', CAST(4.00 AS Numeric(5, 2)), CAST(3.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-003', N'0261010005', CAST(10.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-004', N'0241010001', CAST(3.00 AS Numeric(5, 2)), CAST(1.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-004', N'0241010002', CAST(5.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-004', N'0241010003', CAST(1.00 AS Numeric(5, 2)), CAST(5.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-004', N'0241010004', CAST(1.00 AS Numeric(5, 2)), CAST(8.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-004', N'0241010005', CAST(3.00 AS Numeric(5, 2)), CAST(9.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-004', N'0251010001', CAST(1.00 AS Numeric(5, 2)), CAST(9.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-004', N'0251010002', CAST(7.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-004', N'0251010003', CAST(8.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-004', N'0251010004', CAST(9.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-004', N'0251010005', CAST(3.00 AS Numeric(5, 2)), CAST(3.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-004', N'0261010001', CAST(3.00 AS Numeric(5, 2)), CAST(5.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-004', N'0261010002', CAST(3.00 AS Numeric(5, 2)), CAST(8.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-004', N'0261010003', CAST(8.00 AS Numeric(5, 2)), NULL)
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-004', N'0261010004', CAST(2.00 AS Numeric(5, 2)), CAST(10.00 AS Numeric(5, 2)))
INSERT [dbo].[DIEMTHI] ([MAMONHOC], [MASV], [DIEMLAN1], [DIEMLAN2]) VALUES (N'TO-004', N'0261010005', CAST(6.00 AS Numeric(5, 2)), NULL)

SET NOCOUNT OFF;
