#include "../Include/Market_Participant.h"
#include "../Include/Exchange_Settings.h"
#include <iostream>
#include <set>
#include <random>

std::set<int> Market_Participant::pastIds;

Market_Participant::Market_Participant()
{
    participantId = generate_unique_participant_id();
    holdings = generate_initial_holdings();
}

int Market_Participant::generate_unique_participant_id()
{
    std::random_device rd;
    std::uniform_int_distribution<int> dist(1, 1000000);
    int unique_id;

    do
    {
        int unique_id = dist(rd);

    } while (pastIds.find(unique_id) != pastIds.end());

    pastIds.insert(unique_id);

    // for (int num : pastIds)
    // {
    //     std::cout << num << " ";
    // }
    // std::cout << std::endl;

    return unique_id;
}

std::vector<std::string> Market_Participant::get_tradable_assets()
{
    // Retrieves tradable assets from exchange_config file.
    Exchange_Settings settings;

    std::vector<std::string> tradable_universe = settings.get_tradable_universe();

    return tradable_universe;
}

std::unordered_map<std::string, int> Market_Participant::generate_initial_holdings()
{
    /*
        Market participants are initialized with a random number of shares (between 1 and 100)
        for each asset specified by the 'tradable_universe' paramter in the exchange_config.json
        located in the "Settings" directory.
    */

    std::random_device rd;
    std::uniform_int_distribution<int> dist(1, 100);

    Exchange_Settings settings;
    std::vector<std::string> tradable_universe = settings.get_tradable_universe();

    for (std::string asset : tradable_universe)
    {

        int initial_shares = dist(rd);
        holdings[asset] = initial_shares;
    }
}

std::unordered_map<std::string, int> Market_Participant::get_holdings()
{
    // Returns current holdings of a market participant
    return holdings;
}
