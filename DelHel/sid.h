#pragma once

#include <string>
#include <map>

struct sidinfo {
	std::string rwy;
	std::string jet_dep;
	std::string unlink_jet_dep;
	std::string prop_dep;
	std::string unlink_prop_dep;
	std::string nap;
	int prio{};
	int cfl{};
	int unlink_cfl{};
	int cfl_prop{};
	int unlink_cfl_prop{};
};

struct sid {
	std::string wp;
	int cfl{};
	std::map<std::string, sidinfo> rwys;
};