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
    jsbind::String key(unsigned long index);
    jsbind::String getItem(const jsbind::String& key);
    jsbind::Undefined setItem(const jsbind::String& key, const jsbind::String& value);
    jsbind::Undefined removeItem(const jsbind::String& key);
    jsbind::Undefined clear();
};

