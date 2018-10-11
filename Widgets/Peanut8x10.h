#pragma once

namespace Peanut8x10 {

static constexpr char firstGlyph = '!';
static constexpr char lastGlyph = '~';
static constexpr byte glyphWidth = 8;
static constexpr byte glyphHeight = 10;

static constexpr const char* glyphs[] {

    "   ##   "
    "   ##   "
    "   ##   "
    "   ##   "
    "   ##   "
    "   ##   "
    "        "
    "   ##   "
    "   ##   "
    "        ",

    " ## ##  "
    " ## ##  "
    " #  #   "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        ",

    "  #  #  "
    "  #  #  "
    " ###### "
    "  #  #  "
    "  #  #  "
    "  #  #  "
    " ###### "
    "  #  #  "
    "  #  #  "
    "        ",

    "     #  "
    "  ####  "
    " #  # # "
    " #  #   "
    "  ####  "
    "   #  # "
    " # #  # "
    "  ####  "
    "  #     "
    "        ",

    "        "
    " ##   # "
    " ##  ## "
    "    ##  "
    "   ##   "
    "  ##    "
    " ##  ## "
    " #   ## "
    "        "
    "        ",

    "        "
    "   ##   "
    "  #  #  "
    "  #  #  "
    "  ###   "
    " #   #  "
    " #   # #"
    " #   ## "
    "  ###  #"
    "        ",

    "   ##   "
    "   ##   "
    "   #    "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        ",

    "    #   "
    "   #    "
    "  #     "
    "  #     "
    "  #     "
    "  #     "
    "  #     "
    "   #    "
    "    #   "
    "        ",

    "   #    "
    "    #   "
    "     #  "
    "     #  "
    "     #  "
    "     #  "
    "     #  "
    "    #   "
    "   #    "
    "        ",

    "        "
    "        "
    "        "
    "   #    "
    " #####  "
    "   #    "
    "  # #   "
    "        "
    "        "
    "        ",

    "        "
    "        "
    "        "
    "   #    "
    "   #    "
    " #####  "
    "   #    "
    "   #    "
    "        "
    "        ",

    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "    ##  "
    "   ##   "
    "        ",

    "        "
    "        "
    "        "
    "        "
    "        "
    " #####  "
    "        "
    "        "
    "        "
    "        ",

    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "   ##   "
    "   ##   "
    "        ",
    
    "        "
    "      # "
    "     ## "
    "    ##  "
    "   ##   "
    "  ##    "
    " ##     "
    " #      "
    "        "
    "        ",

    "  ####  "
    " #   ## "
    " #  # # "
    " #  # # "
    " # #  # "
    " # #  # "
    " ##   # "
    " ##   # "
    "  ####  "
    "        ",

    "   #    "
    "  ##    "
    " # #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "  ###   "
    "        ",

    "  ####  "
    " #    # "
    " #    # "
    " #   #  "
    "    #   "
    "   #    "
    "  #     "
    " #      "
    " ###### "
    "        ",

    " ###### "
    "     #  "
    "    #   "
    "   #    "
    "  ####  "
    "      # "
    "      # "
    " #    # "
    "  ####  "
    "        ",

    "      # "
    "     ## "
    "    # # "
    "   #  # "
    "  #   # "
    " ###### "
    "      # "
    "      # "
    "      # "
    "        ",

    " ###### "
    " #      "
    " #      "
    " #      "
    " #####  "
    "      # "
    "      # "
    " #    # "
    "  ####  "
    "        ",

    "     ## "
    "   ##   "
    "  #     "
    " #      "
    " #####  "
    " #    # "
    " #    # "
    " #    # "
    "  ####  "
    "        ",

    " ###### "
    " #    # "
    "      # "
    "     #  "
    "    #   "
    "   #    "
    "  #     "
    "  #     "
    "  #     "
    "        ",

    "  ####  "
    " #    # "
    " #    # "
    " #    # "
    "  ####  "
    " #    # "
    " #    # "
    " #    # "
    "  ####  "
    "        ",

    "  ####  "
    " #    # "
    " #    # "
    " #    # "
    "  ##### "
    "      # "
    "     #  "
    "   ##   "
    " ##     "
    "        ",

    "        "
    "        "
    "        "
    "   ##   "
    "   ##   "
    "        "
    "   ##   "
    "   ##   "
    "        "
    "        ",

    "        "
    "        "
    "        "
    "    ##  "
    "    ##  "
    "        "
    "    ##  "
    "   ##   "
    "        "
    "        ",

    "        "
    "    ##  "
    "   #    "
    "  #     "
    " #      "
    "  #     "
    "   #    "
    "    ##  "
    "        "
    "        ",

    "        "
    "        "
    "        "
    " ###### "
    "        "
    " ###### "
    "        "
    "        "
    "        "
    "        ",

    "        "
    " ##     "
    "   #    "
    "    #   "
    "     #  "
    "    #   "
    "   #    "
    " ##     "
    "        "
    "        ",

    "  ####  "
    " #    # "
    " #    # "
    "     #  "
    "    #   "
    "   ##   "
    "        "
    "   ##   "
    "   ##   "
    "        ",

    "  ####  "
    " #    # "
    " #    # "
    " #  ### "
    " # #  # "
    " # #  # "
    " #  ### "
    " #      "
    "  ####  "
    "        ",

    "  ####  "
    " #    # "
    " #    # "
    " #    # "
    " ###### "
    " #    # "
    " #    # "
    " #    # "
    "###  ###"
    "        ",

    " #####  "
    " #    # "
    " #    # "
    " #    # "
    " ###### "
    " #    # "
    " #    # "
    " #    # "
    " #####  "
    "        ",

    "  ####  "
    " #    # "
    " #      "
    " #      "
    " #      "
    " #      "
    " #      "
    " #    # "
    "  ####  "
    "        ",

    " #####  "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #####  "
    "        ",

    " ###### "
    "  #   # "
    "  #     "
    "  #     "
    "  ####  "
    "  #     "
    "  #     "
    "  #   # "
    " ###### "
    "        ",

    " ###### "
    "  #   # "
    "  #     "
    "  #     "
    "  ###   "
    "  #     "
    "  #     "
    "  #     "
    " ###    "
    "        ",

    "  ####  "
    " #    # "
    " #      "
    " #      "
    " #   ###"
    " #    # "
    " #    # "
    " #    # "
    "  ####  "
    "        ",

    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " ###### "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "        ",

    "  ###   "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "  ###   "
    "        ",

    "  ##### "
    " #   #  "
    "     #  "
    "     #  "
    "     #  "
    "     #  "
    "     #  "
    " #   #  "
    "  ###   "
    "        ",

    " ### ###"
    "  #   # "
    "  #  #  "
    "  #  #  "
    "  ###   "
    "  #  #  "
    "  #  #  "
    "  #   # "
    " ### ###"
    "        ",

    " ###    "
    "  #     "
    "  #     "
    "  #     "
    "  #     "
    "  #     "
    "  #     "
    "  #   # "
    " ###### "
    "        ",

    " #    # "
    " ##  ## "
    " # ## # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "###  ###"
    "        ",

    " #    # "
    " #    # "
    " ##   # "
    " # #  # "
    " #  # # "
    " #   ## "
    " #    # "
    " #    # "
    " #    # "
    "        ",

    "  ####  "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "  ####  "
    "        ",

    " #####  "
    "  #   # "
    "  #   # "
    "  ####  "
    "  #     "
    "  #     "
    "  #     "
    "  #     "
    " ###    "
    "        ",

    "  ####  "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #  # # "
    " #   #  "
    "  ### # "
    "        ",

    " #####  "
    "  #   # "
    "  #   # "
    "  #   # "
    "  ####  "
    "  # #   "
    "  #  #  "
    "  #   # "
    " ###   #"
    "        ",

    "  ####  "
    " #    # "
    " #      "
    " #      "
    "  ####  "
    "      # "
    "      # "
    " #    # "
    "  ####  "
    "        ",

    "####### "
    "#  #  # "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "  ###   "
    "        ",

    "###  ###"
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "  ####  "
    "        ",

    "### ### "
    " #   #  "
    " #   #  "
    " #   #  "
    "  # #   "
    "  # #   "
    "  # #   "
    "   #    "
    "   #    "
    "        ",

    "###  ###"
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " # ## # "
    " ##  ## "
    " #    # "
    "        ",

    "##   ## "
    " #   #  "
    "  # #   "
    "  # #   "
    "   #    "
    "  # #   "
    "  # #   "
    " #   #  "
    "##   ## "
    "        ",

    "##   ## "
    " #   #  "
    "  # #   "
    "  # #   "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "  ###   "
    "        ",

    " ###### "
    " #    # "
    "     #  "
    "    #   "
    "   #    "
    "  #     "
    " #      "
    " #    # "
    " ###### "
    "        ",

    "  ####  "
    "  #     "
    "  #     "
    "  #     "
    "  #     "
    "  #     "
    "  #     "
    "  #     "
    "  ####  "
    "        ",

    "        "
    " #      "
    " ##     "
    "  ##    "
    "   ##   "
    "    ##  "
    "     ## "
    "      # "
    "        "
    "        ",

    "  ####  "
    "     #  "
    "     #  "
    "     #  "
    "     #  "
    "     #  "
    "     #  "
    "     #  "
    "  ####  "
    "        ",

    "   #    "
    "  # #   "
    " #   #  "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        ",

    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    " ###### "
    "        ",

    "   ##   "
    "    ##  "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        ",

    "        "
    "        "
    "        "
    "  ####  "
    " #    # "
    " #    # "
    " #    # "
    " #   ## "
    "  ### # "
    "        ",

    " #      "
    " #      "
    " #      "
    " #####  "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #####  "
    "        ",

    "        "
    "        "
    "        "
    "  ####  "
    " #    # "
    " #      "
    " #      "
    " #    # "
    "  ####  "
    "        ",

    "      # "
    "      # "
    "      # "
    "  ##### "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "  ##### "
    "        ",

    "        "
    "        "
    "        "
    "  ####  "
    " #    # "
    " ###### "
    " #      "
    " #      "
    "  ####  "
    "        ",

    "        "
    "    ### "
    "   #    "
    "  ####  "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "  ###   "
    "        ",

    "        "
    "        "
    "        "
    "  ####  "
    " #    # "
    " #    # "
    " #    # "
    "  ####  "
    "      # "
    "  ####  ",

    " #      "
    " #      "
    " #      "
    " #####  "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "        ",

    "        "
    "   #    "
    "        "
    "  ###   "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "  ###   "
    "        ",

    "        "
    "   #    "
    "        "
    "  ###   "
    "    #   "
    "    #   "
    "    #   "
    "    #   "
    "    #   "
    "  ##    ",

    "###     "
    " #      "
    " #      "
    " #      "
    " #  ##  "
    " # #    "
    " ## #   "
    " #   #  "
    "###   # "
    "        ",

    "  ##    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "  ###   "
    "        ",

    "        "
    "        "
    "        "
    "  ## ## " 
    " #  #  #"
    " #  #  #"
    " #  #  #"
    " #     #"
    " #     #"
    "        ",

    "        "
    "        "
    "        "
    " #####  " 
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "        ",

    "        "
    "        "
    "        "
    "  ####  "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "  ####  "
    "        ",

    "        "
    "        "
    "        "
    " #####  "
    " #    # "
    " #    # "
    " #    # "
    " #####  "
    " #      "
    " #      ",

    "        "
    "        "
    "        "
    "  ##### "
    " #    # "
    " #    # "
    " #    # "
    "  ##### "
    "      # "
    "      # ",

    "        "
    "        "
    "        "
    "  ####  "
    " #    # "
    " #      "
    " #      "
    " #      "
    "###     "
    "        ",

    "        "
    "        "
    "        "
    "  ####  "
    " ##   # "
    "   #    "
    "    #   "
    " #   ## "
    "  ####  "
    "        ",

    "        "
    "   #    "
    "   #    "
    " #####  "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "    ### "
    "        ",

    "        "
    "        "
    "        "
    " #    # " 
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "  #### #"
    "        ",

    "        "
    "        "
    "        "
    " #    # " 
    " #    # "
    " #    # "
    " #    # "
    "  #  #  "
    "   ##   "
    "        ",

    "        "
    "        "
    "        " 
    " #  #  #"
    " #  #  #"
    " #  #  #"
    " #  #  #"
    " #  #  #"
    "  ## ###"
    "        ",


    "        "
    "        "
    "        "
    "###  ###" 
    "  #  #  "
    "   ##   "
    "   ##   "
    "  #  #  "
    "###  ###"
    "        ",

    "        "
    "        "
    "        "
    " #    # "
    " #    # " 
    " #    # "
    " #    # "
    "  ##### "
    "      # "
    "  ####  ",

    "        "
    "        "
    "        "
    " ###### " 
    "     #  "
    "    #   "
    "   #    "
    "  #     "
    " ###### "
    "        ",

    "        "
    "   ##   "
    "  #     "
    "  #     "
    " #      "
    "  #     "
    "  #     "
    "   ##   "
    "        "
    "        ",

    "        "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "        "
    "        ",

    "        "
    "   ##   "
    "     #  "
    "     #  "
    "      # "
    "     #  "
    "     #  "
    "   ##   "
    "        "
    "        ",

    "        "
    "        "
    "        "
    "        "
    "  ##  # "
    " #  ##  "
    "        "
    "        "
    "        "
    "        ",
};

}

