#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DataTransferItemList;
class Element;
class FileList;


class DataTransfer : public emlite::Val {
    explicit DataTransfer(Handle h) noexcept;

public:
    explicit DataTransfer(const emlite::Val &val) noexcept;
    static DataTransfer take_ownership(Handle h) noexcept;

    DataTransfer clone() const noexcept;
    DataTransfer();
    jsbind::String dropEffect() const;
    void dropEffect(const jsbind::String& value);
    jsbind::String effectAllowed() const;
    void effectAllowed(const jsbind::String& value);
    DataTransferItemList items() const;
    jsbind::Undefined setDragImage(const Element& image, long x, long y);
    jsbind::TypedArray<jsbind::String> types() const;
    jsbind::String getData(const jsbind::String& format);
    jsbind::Undefined setData(const jsbind::String& format, const jsbind::String& data);
    jsbind::Undefined clearData();
    jsbind::Undefined clearData(const jsbind::String& format);
    FileList files() const;
};

