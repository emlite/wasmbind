#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class SyncManager : public emlite::Val {
    explicit SyncManager(Handle h) noexcept;

public:
    explicit SyncManager(const emlite::Val &val) noexcept;
    static SyncManager take_ownership(Handle h) noexcept;

    SyncManager clone() const noexcept;
    jsbind::Promise register_(const jsbind::DOMString& tag);
    jsbind::Promise getTags();
};

