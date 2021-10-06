#include <nftstaking.hpp>


ACTION nftstaking::stakenfts(name user, vector<uint64_t> asset_ids) {}
ACTION nftstaking::unstakenfts(name user, vector<uint64_t> asset_ids) {}
ACTION nftstaking::claimrewards(name user) {}
ACTION nftstaking::addwhitelist(name user) {}
ACTION nftstaking::remwhitelist(name user) {}

EOSIO_DISPATCH(nftstaking, (stakenfts)(unstakenfts)(claimrewards)(addwhitelist)(remwhitelist));
