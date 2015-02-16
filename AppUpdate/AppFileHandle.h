#pragma once
#include <iostream>
#include <boost\filesystem.hpp>

class AppFileHandle
{
public:
	AppFileHandle(const std::string& FilePath, const std::string& BackUpDirName);
    ~AppFileHandle();
    // 获取下载文件列表的文件夹
    const boost::filesystem::path& BackUpDirPath();
    // 当文件下载完毕，对文件进行处理
	bool Copy(const boost::filesystem::path& from, const boost::filesystem::path& to);
private:
    boost::filesystem::path m_BackUpDirPath;
};