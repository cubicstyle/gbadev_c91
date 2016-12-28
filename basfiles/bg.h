
// BGに関する設定

#ifndef	_BG_H_
#define	_BG_H_



// BGxCNTに入れる設定

// BGの大きさ
// BG0,1の場合
#define	BG_SIZEA_256_256	0
#define	BG_SIZEA_512_256	(1<<14)
#define	BG_SIZEA_256_512	(2<<14)
#define	BG_SIZEA_512_512	(3<<14)
// BG2,3の場合
#define	BG_SIZEB_128_128	0
#define	BG_SIZEB_256_256	(1<<14)
#define	BG_SIZEB_512_512	(2<<14)
#define	BG_SIZEB_1024_1024	(2<<14)

// BG2,3のみ回転時にオーバーラップする場合
#define	BG_OVERLAP	(1<<13)

// スクリーンベースアドレス 数値×2KB  0-31
#define BG_MAPBASE(x)	((x)<<8)

// BGカラーモード
#define	BG_COLOR_16		0
#define	BG_COLOR_256	(1<<7)

// モザイク設定
#define	BG_MOZAIC_ON	(1<<6)

// BGキャラクタベースアドレス 数値×16KB  0-3
#define	BG_CHARBASE(x)	((x)<<2)

// 優先順位 0-3 0に近いほど前面に描画
#define	BG_PRIORITY(x)	(x)



// マップデータ設定

// 16色パレットの場合 数値のパレット番号を使う
#define	BG_MAP_PAL(x)	((x)<<12)

// X,Y方向のフリップ
#define	BG_MAP_YFLIP	(1<<11)
#define	BG_MAP_XFLIP	(1<<10)

// 使用するタイル番号を指定する
#define	BG_MAP_TILE(x)	(x)


// VRAMでタイルキャラクタを指定する位置
// BG_CHARBASE(x)と同じ数値を入れる
#define	MEM_BG_CHAR(x)	((u16*)(0x6000000 + (x)*0x4000))

// VRAMでマップデータを指定する位置
// BG_MAPBASE(x)と同じ数値を入れる
#define	MEM_BG_MAP(x)	((u16*)(0x6000000 + (x)* 0x800))

// BGメモリアドレス
#define	MEM_BG_PAL	((u16*)0x5000000)


#endif

