#ifndef ELECTRODEBOM_HPP
#define ELECTRODEBOM_HPP

class EActCAD_old;

//Bom数据
struct EActBomData
{
	//数据类型
	string dataType;

	//数据的名称
	string dataName;

	//数据的显示名称
	string displayName;

	//数据的值
	string dataValue;

	//行索引------Eacel时有效
	int rowIndex;

	//列索引------Eacel时有效
	int columnIndex;

	//数据库字段------System数据时有效
	string field;

	//构造函数
	EActBomData()
	{
		this->dataType = "";
		this->dataName = "";
		this->displayName = "";
		this->dataValue = "";
		this->rowIndex = -1;
		this->columnIndex = -1;
		this->field = "";
	}
};

//Table Bom定义数据
struct TableBomDefineData
{
	//模板文件路径
	string templateFilePath;

	//模板文件路径
	string BomName;

	//创建类型
	string buildType;

	//头部定义数据收集器
	vector<EActBomData> headDefDataColl;

	//主体部分起始行
	int startRowIndex;

	//主体部分定义数据收集器
	vector<EActBomData> bodyDefDataColl;
};

//EActSystem定义数据
struct EActSystemDefineData
{
	//EAct系统数据库连接信息
	DataBaseType dataBaseType;

	//EAct系统数据库连接字符串
	string conString;

	//定义数据收集器
	vector<EActBomData> defDataColl;
};

//EMan系统定义数据
struct EManSystemDefineData
{
	//EMan系统API基地址
	string baseUrl;

	//企业代码
	string corpid;

	//定义数据收集器
	vector<EActBomData> defDataColl;
};

//电极BOM类
class EACT_CAD_C_PLUS_PLUS ElectrodeBom : public EActCAD_old
{
public:
	//创建电极BOM实例
	static ElectrodeBom * CreateInstance();

	//销毁对象
	void Destroy();

	//初始化用户配置
	void InitElecBomConfig();

	//初始化电极BOM
	void InitElectrodeBom(const int &dialogID);

	//初始化BOM列表
	void InitElecBomUI();

	//初始化UI数据
	void InitializeUIData();

	//填充电极列表
	void FillElectrodeList();

	//更新属性列表
	void UpdataElecAttrList();

	//选择全部电极
	void ToggleSelectAllElec();

	//打开当前表格目录回调
	void OpenCurWorkTablePath();

	//选择导出表格路径回调
	void SelectExportTablePath();

	//应用电极BOM
	bool ApplyElecBom();

	//销毁UI
	void DestroyUI();

protected:

	//界面数据定义数据
	vector<EActBomData> uiDefDataColl;

	//表格BOM定义数据收集器
	vector<TableBomDefineData> tableBomDefDataColl;

	//EAct系统定义数据收集器
	EActSystemDefineData eActSysDefData;

	//EMan系统定义数据收集器
	EManSystemDefineData eManSysDefData;

	//电极子类型收集器
	vector<pair<string, string>> elecSubtypeColl;

	//电极列表控件
	EActListCtrl *elecListCtrl;

	//电极属性列表控件
	EActListCtrl *elecAttrListCtrl;

	//部件对象
	EActPart *displayPart;

	//界面数据收集器
	map<string, vector<EActBomData>> uiDataColl;

	//电极原型收集器
	map<string, EActElecPrototype *> elecPrototypeColl;

	//编码器
	EActStringCoder *stringCoder;

	//重复提示
	int repeatOption;

	//默认构造函数
	ElectrodeBom();

	//默认析构函数
	~ElectrodeBom();

	//电极列表选中回调
	static void ElecListCtrlLButtonDown(void *UserData); 

	//写Excel Bom
	void WriteExcelBom(const vector<string> &elecNameColl);

	//获取Part的属性
	vector<EActBomData> GetPartData(const vector<EActBomData> &bomDefDataColl);

	//一个电极原型一行
	vector<vector<EActBomData>> GetElecDataByElecPrototype(const vector<EActBomData> &bomDefDataColl, const vector<string> &elecNameColl);

	//一个电极含类型的一行
	vector<vector<EActBomData>> GetElecDataByContainType(const vector<EActBomData> &bomDefDataColl, const vector<string> &elecNameColl);

	//一个电极含尾号的一行
	vector<vector<EActBomData>> GetElecDataByContainTail(const vector<EActBomData> &bomDefDataColl, const vector<string> &elecNameColl);

	//获取标准信息
	EActBomData GetStandardData(EActElecPrototype *elecPrototype, const EActBomData &bomDefData);

	//上传系统Bom
	void UploadSystemBom(const vector<string> &elecNameColl);

	//上传EMan系统BOM
	void UploadEManSystemBom(const vector<string> &elecNameColl);
};

#endif