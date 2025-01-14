//
//  favorite_tab.hpp
//  Moonlight
//
//  Created by Даниил Виноградов on 24.09.2021.
//

#pragma once

#include <borealis.hpp>
#include <Settings.hpp>
#include "grid_view.hpp"

class FavoriteTab : public brls::Box
{
  public:
    FavoriteTab();

    void refreshIfNeeded();
    void setRefreshNeeded() { isDirty = true; }
    static brls::View* create();
private:
    BRLS_BIND(brls::Box, container, "container");

    bool isDirty = false;

    void updateAppList();
};
