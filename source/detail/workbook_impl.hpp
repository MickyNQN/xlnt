#pragma once

#include <vector>

namespace xlnt {
namespace detail {

struct workbook_impl
{
    workbook_impl(optimization o);
    bool optimized_read_;
    bool optimized_write_;
    bool guess_types_;
    bool data_only_;
    int active_sheet_index_;
    std::vector<worksheet_impl> worksheets_;
    std::vector<relationship> relationships_;
    std::vector<drawing> drawings_;
};

} // namespace detail
} // namespace xlnt