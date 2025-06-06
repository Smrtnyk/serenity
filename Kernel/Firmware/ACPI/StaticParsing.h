/*
 * Copyright (c) 2023, Liav A. <liavalb@hotmail.co.il>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/Error.h>
#include <AK/Optional.h>
#include <AK/Types.h>
#include <Kernel/Memory/PhysicalAddress.h>

namespace Kernel::ACPI::StaticParsing {

Optional<PhysicalAddress> find_rsdp();
ErrorOr<Optional<PhysicalAddress>> find_table(PhysicalAddress rsdp, StringView signature);
ErrorOr<Optional<PhysicalAddress>> search_table_in_xsdt(PhysicalAddress xsdt, StringView signature);
ErrorOr<Optional<PhysicalAddress>> search_table_in_rsdt(PhysicalAddress rsdt, StringView signature);

}
