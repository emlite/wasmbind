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
    jsbind::DOMString dropEffect() const;
    void dropEffect(const jsbind::DOMString& value);
    jsbind::DOMString effectAllowed() const;
    void effectAllowed(const jsbind::DOMString& value);
    DataTransferItemList items() const;
    jsbind::Undefined setDragImage(const Element& image, long x, long y);
    jsbind::FrozenArray<jsbind::DOMString> types() const;
    jsbind::DOMString getData(const jsbind::DOMString& format);
    jsbind::Undefined setData(const jsbind::DOMString& format, const jsbind::DOMString& data);
    jsbind::Undefined clearData(const jsbind::DOMString& format);
    FileList files() const;
};

