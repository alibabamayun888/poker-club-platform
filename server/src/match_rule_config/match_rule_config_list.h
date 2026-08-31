#ifndef __MATCH_RULE_CONFIG_LIST_H__
#define __MATCH_RULE_CONFIG_LIST_H__
class MatchRuleConfigListRequest
{
public:
	MatchRuleConfigListRequest(const string& json) {
		this->Deserialize(json);
	}
	template <typename Writer>
	void Serialize(Writer& writer) const {
		writer.StartObject();
		SERIALIZE_MEMBER(writer,id);
		SERIALIZE_MEMBER(writer,startDate);
		SERIALIZE_MEMBER(writer,endDate);

		writer.EndObject();
	}

	void toString(std::string& json) {
		StringBuffer sb;
		Writer<StringBuffer> writer(sb);
		Serialize(writer);
		json = sb.GetString();
	}

	void Deserialize(const string& json)
	{
		Document d;
		if (d.Parse(json.c_str()).HasParseError()){
			throw logic_error("parse json error. raw data : " + json);
		}
		SET_DOC_MEMBER(d,id);
		SET_DOC_MEMBER(d,startDate);
		SET_DOC_MEMBER(d,endDate);

	}

	static tars::Int32 handler(const vector<tars::Char>& reqBuf, const map<std::string, std::string>& extraInfo, vector<tars::Char>& rspBuf)
	{
	    return 0;
	}
private:
	CString        	_id             ;  //主键id
	CString        	_startDate      ;  //开始时间
	CString        	_endDate        ;  //结束时间

};
class MatchRuleConfigListResponse
{
public:
	MatchRuleConfigListResponse(const string& json) {
		this->Deserialize(json);
	}
	template <typename Writer>
	void Serialize(Writer& writer) const {
		writer.StartObject();
		SERIALIZE_MEMBER(writer,id);
		SERIALIZE_MEMBER(writer,riseBlindStage);
		SERIALIZE_MEMBER(writer,riseBlindCoin);
		SERIALIZE_MEMBER(writer,coin);
		SERIALIZE_MEMBER(writer,ifRebuild);
		SERIALIZE_MEMBER(writer,ifIncrease);
		SERIALIZE_MEMBER(writer,ifDelay);
		SERIALIZE_MEMBER(writer,optUser);
		SERIALIZE_MEMBER(writer,createDate);

		writer.EndObject();
	}

	void toString(std::string& json) {
		StringBuffer sb;
		Writer<StringBuffer> writer(sb);
		Serialize(writer);
		json = sb.GetString();
	}

	void Deserialize(const string& json)
	{
		Document d;
		if (d.Parse(json.c_str()).HasParseError()){
			throw logic_error("parse json error. raw data : " + json);
		}
		SET_DOC_MEMBER(d,id);
		SET_DOC_MEMBER(d,riseBlindStage);
		SET_DOC_MEMBER(d,riseBlindCoin);
		SET_DOC_MEMBER(d,coin);
		SET_DOC_MEMBER(d,ifRebuild);
		SET_DOC_MEMBER(d,ifIncrease);
		SET_DOC_MEMBER(d,ifDelay);
		SET_DOC_MEMBER(d,optUser);
		SET_DOC_MEMBER(d,createDate);

	}

	static tars::Int32 handler(const vector<tars::Char>& reqBuf, const map<std::string, std::string>& extraInfo, vector<tars::Char>& rspBuf)
	{
	    return 0;
	}
private:
	CInteger       	_id             ;  //主键
	CInteger       	_riseBlindStage ;  //涨盲的阶段数
	CInteger       	_riseBlindCoin  ;  //每阶段涨盲金额
	CInteger       	_coin           ;  //每个阶段前注的金额
	CInteger       	_ifRebuild      ;  //每个阶段是否可以重购 （0：否  1：是）
	CInteger       	_ifIncrease     ;  //每个阶段是否可以增购 （0：否  1：是）
	CInteger       	_ifDelay        ;  //每个阶段是否可以延迟报名（0：否  1：是）
	CString        	_optUser        ;  //操作者
	CString        	_createDate     ;  //创建时间

};
#endif