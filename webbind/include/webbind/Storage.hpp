#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class Storage : public emlite::Val {
    explicit Storage(Handle h) noexcept;

public:
    explicit Storage(const emlite::Val &val) noexcept;
    static Storage take_ownership(Handle h) noexcept;

    Storage clone() const noexcept;
    unsigned long length() const;
    jsbind::DOMString key(unsigned long index);
    jsbind::DOMString getItem(const jsbind::DOMString& key);
    jsbind::Undefined setItem(const jsbind::DOMString& key, const jsbind::DOMString& value);
    jsbind::Undefined removeItem(const jsbind::DOMString& key);
    jsbind::Undefined clear();
};

