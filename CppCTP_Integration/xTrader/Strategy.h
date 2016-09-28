#ifndef QUANT_STRATEGY_H
#define QUANT_STRATEGY_H
#include <list>
#include "Trader.h"
#include "Algorithm.h"
#include "Debug.h"
#include "DBManager.h"

using std::list;
class DBManager;

#define ALGORITHM_ONE	"01"
#define ALGORITHM_TWO	"02"
#define ALGORITHM_THREE "03"
#define ALGORITHM_FOUR	"04"

class Strategy {

public:

	Strategy();

	void get_tick(CThostFtdcDepthMarketDataField *pDepthMarketData);

	void setTrader(Trader *trader);
	Trader *getTrader();

	void setUser(User *user);
	User *getUser();

	void setStrategyId(string strategyid);
	string getStrategyId();

	void setAlgorithm(Algorithm *alg);
	Algorithm *getAlgorithm();

	void addInstrumentToList(string instrument);
	list<string> *getListInstruments();

	void setTraderID(string traderid);
	string getTraderID();

	void setUserID(string userid);
	string getUserID();

	CThostFtdcInputOrderField* getStgAOrderInsertArgs();
	void setStgAOrderInsertArgs(
		CThostFtdcInputOrderField* stgAOrderInsertArgs);

	double getStgAPriceTick();
	void setStgAPriceTick(double stgAPriceTick);

	double getStgAWaitPriceTick();
	void setStgAWaitPriceTick(double stgAWaitPriceTick);

	CThostFtdcInputOrderField* getStgBOrderInsertArgs();
	void setStgBOrderInsertArgs(
		CThostFtdcInputOrderField* stgBOrderInsertArgs);

	double getStgBPriceTick();
	void setStgBPriceTick(double stgBPriceTick);

	double getStgBWaitPriceTick();
	void setStgBWaitPriceTick(double stgBWaitPriceTick);

	double getStgBuyClose();
	void setStgBuyClose(double stgBuyClose);

	double getStgBuyOpen();
	void setStgBuyOpen(double stgBuyOpen);

	DBManager* getStgDbm();
	void setStgDbm(DBManager* stgDbm);

	CThostFtdcDepthMarketDataField* getStgInstrumentATick();
	void setStgInstrumentATick(
		CThostFtdcDepthMarketDataField* stgInstrumentATick);

	CThostFtdcDepthMarketDataField* getStgInstrumentBTick();
	void setStgInstrumentBTick(
		CThostFtdcDepthMarketDataField* stgInstrumentBTick);

	CThostFtdcDepthMarketDataField* getStgInstrumentATickLast();
	void setStgInstrumentATickLast(
		CThostFtdcDepthMarketDataField* stgInstrumentATick);

	CThostFtdcDepthMarketDataField* getStgInstrumentBTickLast();
	void setStgInstrumentBTickLast(
		CThostFtdcDepthMarketDataField* stgInstrumentBTick);

	string getStgInstrumentIdA();
	void setStgInstrumentIdA(string stgInstrumentIdA);

	string getStgInstrumentIdB();
	void setStgInstrumentIdB(string stgInstrumentIdB);

	bool isStgIsActive();
	void setStgIsActive(bool stgIsActive);

	list<CThostFtdcOrderField *> *getStgListOrderPending();
	void setStgListOrderPending(list<CThostFtdcOrderField *> *stgListOrderPending);

	int getStgLots();
	void setStgLots(int stgLots);

	int getStgLotsBatch();
	void setStgLotsBatch(int stgLotsBatch);

	bool isStgOnlyClose();
	void setStgOnlyClose(bool stgOnlyClose);

	int getStgOrderActionTiresLimit();
	void setStgOrderActionTiresLimit(int stgOrderActionTiresLimit);

	string getStgOrderAlgorithm();
	void setStgOrderAlgorithm(string stgOrderAlgorithm);

	string getStgOrderRefA();
	void setStgOrderRefA(string stgOrderRefA);

	string getStgOrderRefB();
	void setStgOrderRefB(string stgOrderRefB);

	string getStgOrderRefLast();
	void setStgOrderRefLast(string stgOrderRefLast);

	int getStgPositionABuy();
	void setStgPositionABuy(int stgPositionABuy);

	int getStgPositionABuyToday();
	void setStgPositionABuyToday(int stgPositionABuyToday);

	int getStgPositionABuyYesterday();
	void setStgPositionABuyYesterday(int stgPositionABuyYesterday);

	int getStgPositionASell();
	void setStgPositionASell(int stgPositionASell);

	int getStgPositionASellToday();
	void setStgPositionASellToday(int stgPositionASellToday);

	int getStgPositionASellYesterday();
	void setStgPositionASellYesterday(int stgPositionASellYesterday);

	int getStgPositionBBuy();
	void setStgPositionBBuy(int stgPositionBBuy);

	int getStgPositionBBuyToday();
	void setStgPositionBBuyToday(int stgPositionBBuyToday);

	int getStgPositionBBuyYesterday();
	void setStgPositionBBuyYesterday(int stgPositionBBuyYesterday);

	int getStgPositionBSell();
	void setStgPositionBSell(int stgPositionBSell);

	int getStgPositionBSellToday();
	void setStgPositionBSellToday(int stgPositionBSellToday);

	int getStgPositionBSellYesterday();
	void setStgPositionBSellYesterday(int stgPositionBSellYesterday);

	double getStgSellClose();
	void setStgSellClose(double stgSellClose);

	double getStgSellOpen();
	void setStgSellOpen(double stgSellOpen);

	double getStgSpread();
	void setStgSpread(double stgSpread);

	double getStgSpreadLong();
	void setStgSpreadLong(double stgSpreadLong);

	int getStgSpreadLongVolume();
	void setStgSpreadLongVolume(int stgSpreadLongVolume);

	double getStgSpreadShift();
	void setStgSpreadShift(double stgSpreadShift);

	double getStgSpreadShort();
	void setStgSpreadShort(double stgSpreadShort);

	int getStgSpreadShortVolume();
	void setStgSpreadShortVolume(int stgSpreadShortVolume);

	double getStgStopLoss();
	void setStgStopLoss(double stgStopLoss);

	string getStgStrategyId();
	void setStgStrategyId(string stgStrategyId);

	bool isStgTradeTasking();
	void setStgTradeTasking(bool stgTradeTasking);

	string getStgTraderId();
	void setStgTraderId(string stgTraderId);

	User* getStgUser();
	void setStgUser(User* stgUser);

	string getStgUserId();
	void setStgUserId(string stgUserId);

	void setStgOrderRefBase(long long stg_order_ref_base);
	long long getStgOrderRefBase();

	/************************************************************************/
	/* 交易相关的回报函数                                                      */
	/************************************************************************/
	//下单
	void OrderInsert(User *user, char *InstrumentID, char CombOffsetFlag, char Direction, int Volume, double Price, string OrderRef);

	//下单响应
	void OnRtnOrder(CThostFtdcOrderField *pOrder);

	//成交通知
	void OnRtnTrade(CThostFtdcTradeField *pTrade);

	//下单错误响应
	void OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder);

	///报单录入请求响应
	void OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder);

	//撤单
	void OrderAction(string ExchangeID, string OrderRef, string OrderSysID);

	//撤单错误响应
	void OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction);

	//撤单错误
	void OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction);

	//选择下单算法
	int Select_Order_Algorithm(string stg_order_algorithm);

	//下单算法1
	void Order_Algorithm_One();
	//下单算法2
	void Order_Algorithm_Two();
	//下单算法3
	void Order_Algorithm_Three();

	/// 生成报单引用
	string Generate_Order_Ref();

	/// 执行任务函数
	void Exec_OrderInsert();			// 报单
	void Exec_OnRspOrderInsert();		// 报单录入请求
	void Exec_OnRspOrderAction();		// 报单操作请求响应
	void Exec_OnRtnOrder(CThostFtdcOrderField *pOrder);				// 保单回报
	void Exec_OnErrRtnOrderInsert();	// 报单录入错误回报
	void Exec_OnErrRtnOrderAction();	// 报单操作错误回报
	void Exec_OnTickComing(CThostFtdcDepthMarketDataField *pDepthMarketData);			// 行情回调,执行交易任务

	/// 更新挂单list
	void update_pending_order_list(CThostFtdcOrderField *pOrder);

	/// 更新持仓量
	void update_position(CThostFtdcOrderField *pOrder);

	/// 得到三个数最小值
	int getMinNum(int num1, int num2, int num3);

private:
	Trader *trader;
	User *user;
	string strategyid;
	string userid;
	string traderid;
	Algorithm *alg;
	list<string> *l_instruments;

	DBManager *stg_DBM;			// 数据库连接实例
	User *stg_user;				// user实例
	string stg_trader_id;		// 交易员账户id
	string stg_user_id;			// user_id
	string stg_strategy_id;		// 策略id
	string stg_order_algorithm;	// 下单算法选择标志位
	string stg_instrument_id_A;	// 合约A
	string stg_instrument_id_B;	// 合约B

	double stg_buy_open;				// 触发买开（开多单）
	double stg_sell_close;				// 触发卖平（平多单）
	double stg_sell_open;				// 触发卖开（开空单）
	double stg_buy_close;				// 触发买平（平空单）
	double stg_spread_shift;			// 价差让价
	double stg_a_wait_price_tick;		// A合约挂单等待最小跳数
	double stg_b_wait_price_tick;		// B合约挂单等待最小跳数
	double stg_stop_loss;				// 止损，单位为最小跳数
	int stg_lots;						// 总手
	int stg_lots_batch;					// 每批下单手数
	bool stg_is_active;					// 策略开关状态
	int stg_order_action_tires_limit;	// 撤单次数限制
	bool stg_only_close;				// 只能平仓

	int stg_position_a_buy_today;		// A合约买持仓今仓
	int stg_position_a_buy_yesterday;	// A合约买持仓昨仓
	int stg_position_a_buy;				// A合约买持仓总仓位
	int stg_position_a_sell_today;		// A合约卖持仓今仓
	int stg_position_a_sell_yesterday;	// A合约卖持仓昨仓
	int stg_position_a_sell;			// A合约卖持仓总仓位
	int stg_position_b_buy_today;		// B合约买持仓今仓
	int stg_position_b_buy_yesterday;	// B合约买持仓昨仓
	int stg_position_b_buy;				// B合约买持仓总仓位
	int stg_position_b_sell_today;		// B合约卖持仓今仓
	int stg_position_b_sell_yesterday;	// B合约卖持仓昨仓
	int stg_position_b_sell;			// B合约卖持仓总仓位

	CThostFtdcDepthMarketDataField *stg_instrument_A_tick;	// A合约tick（第一腿）
	CThostFtdcDepthMarketDataField *stg_instrument_B_tick;	// B合约tick（第二腿）
	CThostFtdcDepthMarketDataField *stg_instrument_A_tick_last;	// A合约tick（第一腿）交易前最后一次
	CThostFtdcDepthMarketDataField *stg_instrument_B_tick_last;	// B合约tick（第二腿）交易前最后一次
	double stg_spread_long;									// 市场多头价差：A合约买一价 - B合约买一价
	int stg_spread_long_volume;								// 市场多头价差盘口挂单量min(A合约买一量 - B合约买一量)
	double stg_spread_short;								// 市场空头价差：A合约卖一价 - B合约卖一价
	int stg_spread_short_volume;							// 市场空头价差盘口挂单量：min(A合约买一量 - B合约买一量)
	double stg_spread;										// 市场最新价价差

	string stg_order_ref_last;	// 最后一次实际使用的报单引用
	string stg_order_ref_a;		// A合约报单引用
	string stg_order_ref_b;		// B合约报单引用
	double stg_a_price_tick;	// A合约最小跳价
	double stg_b_price_tick;	// B合约最小跳价

	bool stg_trade_tasking;		// 交易任务进行中
	CThostFtdcInputOrderField *stg_a_order_insert_args;		// a合约报单参数
	CThostFtdcInputOrderField *stg_b_order_insert_args;		// b合约报单参数
	list<CThostFtdcOrderField *> *stg_list_order_pending;	// 挂单列表，报单、成交、撤单回报

	long long stg_order_ref_base; // 报单引用计数

};

#endif