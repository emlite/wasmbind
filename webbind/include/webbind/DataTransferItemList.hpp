#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DataTransferItem;
class File;


class DataTransferItemList : public emlite::Val {
    explicit DataTransferItemList(Handle h) noexcept;

public:
    explicit DataTransferItemList(const emlite::Val &val) noexcept;
    static DataTransferItemList take_ownership(Handle h) noexcept;

    DataTransferItemList clone() const noexcept;
    unsigned long length() const;
    DataTransferItem add(const File& data);
    jsbind::Undefined remove(unsigned long index);
    jsbind::Undefined clear();
};

