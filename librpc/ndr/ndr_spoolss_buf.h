#ifndef ___SPACE_SRC_SAMBA_SOURCES_SAMBA_GIT_SOURCE3____SOURCE4_LIBRPC_NDR_NDR_SPOOLSS_BUF_H__
#define ___SPACE_SRC_SAMBA_SOURCES_SAMBA_GIT_SOURCE3____SOURCE4_LIBRPC_NDR_NDR_SPOOLSS_BUF_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private
 * to this subsystem or library. These functions should not be
 * used outside this particular subsystem! */


/* The following definitions come from /space/src/samba/SOURCES/samba.git/source3/../source4/librpc/ndr/ndr_spoolss_buf.c  */

enum ndr_err_code ndr_push_spoolss_EnumPrinters(struct ndr_push *ndr, int flags, const struct spoolss_EnumPrinters *r);
enum ndr_err_code ndr_pull_spoolss_EnumPrinters(struct ndr_pull *ndr, int flags, struct spoolss_EnumPrinters *r);
uint32_t ndr_size_spoolss_EnumPrinters_info(TALLOC_CTX *mem_ctx, struct smb_iconv_convenience *iconv_convenience, uint32_t level, uint32_t count, union spoolss_PrinterInfo *info);
enum ndr_err_code ndr_push_spoolss_EnumJobs(struct ndr_push *ndr, int flags, const struct spoolss_EnumJobs *r);
enum ndr_err_code ndr_pull_spoolss_EnumJobs(struct ndr_pull *ndr, int flags, struct spoolss_EnumJobs *r);
uint32_t ndr_size_spoolss_EnumJobs_info(TALLOC_CTX *mem_ctx, struct smb_iconv_convenience *iconv_convenience, uint32_t level, uint32_t count, union spoolss_JobInfo *info);
enum ndr_err_code ndr_push_spoolss_EnumPrinterDrivers(struct ndr_push *ndr, int flags, const struct spoolss_EnumPrinterDrivers *r);
enum ndr_err_code ndr_pull_spoolss_EnumPrinterDrivers(struct ndr_pull *ndr, int flags, struct spoolss_EnumPrinterDrivers *r);
uint32_t ndr_size_spoolss_EnumPrinterDrivers_info(TALLOC_CTX *mem_ctx, struct smb_iconv_convenience *iconv_convenience, uint32_t level, uint32_t count, union spoolss_DriverInfo *info);
enum ndr_err_code ndr_push_spoolss_EnumForms(struct ndr_push *ndr, int flags, const struct spoolss_EnumForms *r);
enum ndr_err_code ndr_pull_spoolss_EnumForms(struct ndr_pull *ndr, int flags, struct spoolss_EnumForms *r);
uint32_t ndr_size_spoolss_EnumForms_info(TALLOC_CTX *mem_ctx, struct smb_iconv_convenience *iconv_convenience, uint32_t level, uint32_t count, union spoolss_FormInfo *info);
enum ndr_err_code ndr_push_spoolss_EnumPorts(struct ndr_push *ndr, int flags, const struct spoolss_EnumPorts *r);
enum ndr_err_code ndr_pull_spoolss_EnumPorts(struct ndr_pull *ndr, int flags, struct spoolss_EnumPorts *r);
uint32_t ndr_size_spoolss_EnumPorts_info(TALLOC_CTX *mem_ctx, struct smb_iconv_convenience *iconv_convenience, uint32_t level, uint32_t count, union spoolss_PortInfo *info);
enum ndr_err_code ndr_push_spoolss_EnumMonitors(struct ndr_push *ndr, int flags, const struct spoolss_EnumMonitors *r);
enum ndr_err_code ndr_pull_spoolss_EnumMonitors(struct ndr_pull *ndr, int flags, struct spoolss_EnumMonitors *r);
uint32_t ndr_size_spoolss_EnumMonitors_info(TALLOC_CTX *mem_ctx, struct smb_iconv_convenience *iconv_convenience, uint32_t level, uint32_t count, union spoolss_MonitorInfo *info);
enum ndr_err_code ndr_push_spoolss_EnumPrintProcessors(struct ndr_push *ndr, int flags, const struct spoolss_EnumPrintProcessors *r);
enum ndr_err_code ndr_pull_spoolss_EnumPrintProcessors(struct ndr_pull *ndr, int flags, struct spoolss_EnumPrintProcessors *r);
uint32_t ndr_size_spoolss_EnumPrintProcessors_info(TALLOC_CTX *mem_ctx, struct smb_iconv_convenience *iconv_convenience,
						   uint32_t level, uint32_t count, union spoolss_PrintProcessorInfo *info);
enum ndr_err_code ndr_push_spoolss_EnumPrintProcDataTypes(struct ndr_push *ndr, int flags, const struct spoolss_EnumPrintProcDataTypes *r);
enum ndr_err_code ndr_pull_spoolss_EnumPrintProcDataTypes(struct ndr_pull *ndr, int flags, struct spoolss_EnumPrintProcDataTypes *r);
uint32_t ndr_size_spoolss_EnumPrintProcDataTypes_info(TALLOC_CTX *mem_ctx, struct smb_iconv_convenience *iconv_convenience,
						      uint32_t level, uint32_t count, union spoolss_PrintProcDataTypesInfo *info);
enum ndr_err_code ndr_push_spoolss_EnumPrinterDataEx(struct ndr_push *ndr, int flags, const struct spoolss_EnumPrinterDataEx *r);
enum ndr_err_code ndr_pull_spoolss_EnumPrinterDataEx(struct ndr_pull *ndr, int flags, struct spoolss_EnumPrinterDataEx *r);
uint32_t ndr_size_spoolss_EnumPrinterDataEx_info(TALLOC_CTX *mem_ctx, struct smb_iconv_convenience *iconv_convenience,
						 uint32_t count, struct spoolss_PrinterEnumValues *info);
enum ndr_err_code ndr_push_spoolss_GetPrinterData(struct ndr_push *ndr, int flags, const struct spoolss_GetPrinterData *r);
enum ndr_err_code ndr_pull_spoolss_GetPrinterData(struct ndr_pull *ndr, int flags, struct spoolss_GetPrinterData *r);
enum ndr_err_code ndr_push_spoolss_SetPrinterData(struct ndr_push *ndr, int flags, const struct spoolss_SetPrinterData *r);
enum ndr_err_code ndr_push_spoolss_GetPrinterDataEx(struct ndr_push *ndr, int flags, const struct spoolss_GetPrinterDataEx *r);
enum ndr_err_code ndr_pull_spoolss_GetPrinterDataEx(struct ndr_pull *ndr, int flags, struct spoolss_GetPrinterDataEx *r);
enum ndr_err_code ndr_push_spoolss_SetPrinterDataEx(struct ndr_push *ndr, int flags, const struct spoolss_SetPrinterDataEx *r);
uint32_t _ndr_size_spoolss_DeviceMode(struct spoolss_DeviceMode *devmode, struct smb_iconv_convenience *ic, uint32_t flags);
size_t ndr_size_spoolss_StringArray(const struct spoolss_StringArray *r, struct smb_iconv_convenience *ic, int flags);
_PUBLIC_ enum ndr_err_code ndr_push_spoolss_DriverInfo101(struct ndr_push *ndr, int ndr_flags, const struct spoolss_DriverInfo101 *r);
_PUBLIC_ enum ndr_err_code ndr_pull_spoolss_DriverInfo101(struct ndr_pull *ndr, int ndr_flags, struct spoolss_DriverInfo101 *r);
void ndr_print_spoolss_Field(struct ndr_print *ndr, const char *name, const union spoolss_Field *r);
size_t ndr_size_spoolss_PrinterData(const union spoolss_PrinterData *r, uint32_t level, struct smb_iconv_convenience *ic, int flags);

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* ___SPACE_SRC_SAMBA_SOURCES_SAMBA_GIT_SOURCE3____SOURCE4_LIBRPC_NDR_NDR_SPOOLSS_BUF_H__ */

