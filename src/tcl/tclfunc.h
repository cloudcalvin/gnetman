extern char *config_dir;
extern int set_current_design(char *designName);
extern int set_current_library(char *libraryName);
extern int set_current_netlist(char *netlistName);
extern int set_root_netlist(char *netlistName);
extern void create_net(char *netName);
extern void merge_net_into_net(char *sourceNetName, char *destNetName);
extern char *get_current_design(void);
extern void component_library(char *dirName);
extern void source_library(char *dirName);
extern void reset_source_library(void);
extern void reset_component_library(void);
extern void set_spice_target(char *spiceType);
extern void add_spice_device(char *device);
extern void set_dollar_as_comment(void);
extern void unset_dollar_as_comment(void);
extern int get_dollar_as_comment(void);
extern int create_default_symbol(char *schemName);
extern void set_include_top_level_ports(int value);
extern void set_max_line_length(int value);
extern int write_netlist(char *format, char *fileName);
extern int read_netlist(char *format, char *designName, char *fileName);
extern int read_library(char *format, char *libraryName, char *fileName);
extern int write_library(char *format, char *fileName);
extern int generate_devices(void);
extern void convert_power_insts_to_globals(void);
extern void thread_global_through_hierarchy(char *globalName, int createTopLevelPorts);
extern void thread_globals_through_hierarchy(int createTopLevelPorts);
extern void rename_global(char *globalName, char *newGlobalName);
extern void rename_netlist(char *netlistName, char *newNetlistName);
extern int make_netlists_upper_case(char *designName);
extern void set_netlist_value(char *netlistName, char *propName, char *value);
extern char *get_netlist_value(char *netlistName, char *propName);
extern void set_inst_value(char *instName, char *propName, char *value);
extern char *get_inst_value(char *instName, char *propName);
extern void set_net_value(char *netName, char *propName, char *value);
extern char *get_net_value(char *netName, char *propName);
extern void explode_instance_arrays(void);
extern char *get_first_inst(void);
extern char *get_next_inst(char *instName);
extern char *get_first_net(void);
extern char *get_next_net(char *netName);
extern char *get_first_netlist(void);
extern char *get_next_netlist(char *netlistName);
extern char *get_inst_internal_netlist(char *instName);
extern int net_exists(char *netName);
extern int inst_exists(char *instName);
extern void report_port_sums(char *deviceType, char *pinType, char *expression);
extern void report_portlist_sums(char *pinList, char *expression);
extern void set_library_wins(int value);
extern void set_resistor_names(char *res250, char *res6k);
extern void save_database(char *fileName);
extern void load_database(char *fileName);
