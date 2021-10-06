#include <eosio/eosio.hpp>

using namespace std;
using namespace eosio;

CONTRACT nftstaking : public contract
{
public:
  using contract::contract;

  ACTION stakenfts(name user, vector<uint64_t> asset_ids);
  ACTION unstakenfts(name user, vector<uint64_t> asset_ids);
  ACTION claimrewards(name user);
  ACTION addwhitelist(name user);
  ACTION remwhitelist(name user);

private:
  TABLE stakednfts
  {
    name user;
    vector<uint64_t> asset_ids;

    auto primary_key() const { return user.value; };
  };

  TABLE whitelists
  {
    name user;

    auto primary_key() const { return user.value; };
  };

  TABLE banlists
  {
    name user;

    auto primary_key() const { return user.value; };
  };

  typedef multi_index<name("stakednfts"), stakednfts> stakenfts_table;
  typedef multi_index<name("whitelists"), whitelists> whitelists_table;
  typedef multi_index<name("banlists"), banlists> banlists_table;
};
