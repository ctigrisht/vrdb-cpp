<br/>
<center>
<img src="https://cdn.entitysystems.co/vrdb_logo.png" width="100">
</center>

# WELCOME TO VRDB
## Vector Relational Database
### Lightweight NoSQL Database with Advanced Relationships
**Note:** This project is currently under development, and features are subject to change.

### Live Development Streaming
I am live streaming the development process of 
the database on Twitch and keeping the VODs on YouTube! Join the Twitch channel to get a
look at the creation of the database, interact with me live, 
and stay updated on the latest progress.

Twitch: [View live channel](https://www.twitch.tv/khamasito) <br>
Youtube: [View VOD channel](https://www.youtube.com/channel/UC-4lgc6xsNIz-QfokfcVh9w)

### WHAT IS VRDB?

VRDB is a lightweight noSQL relational database server with native relationships and fixed schemas.
It is intended to be used on systems of any scale that require a network accessible database.
<br/>

*The goal is not to have 100's of gigabytes of build files, just `make` and run, all self-contained*

### WHY VRDB?

People don't like noSQL because there is no schema or relationships, 
people don't like SQL because, you know, SQL...
So then, why not just use a noSQL database with a schema and advanced relationships? 
Sounds perfect right?

Then, there is also the common consensus that using a full-fledged heavy 
database server on light hardware for small scale operations is too much. 
People creating small scale projects will tend to use a monolith with a local file database,
such as SQLite.
Why not have a high-performance lightweight database server that can share requests 
across the network, thus enabling shared state across services.
Larger scale applications are also first-grade citizens, horizontal scaling, 
ACID, async queries and transactions and all the good stuff will be here.

### Schemas
With fixed schemas and support for multiple schemas per table, 
the database provides flexibility while maintaining structure.
Unions are very loved across the universe (of programming, corporate doesn't).

### Compatibility and clients
Easy to use from various client languages such as C#, Node.js, Go, and more.
The interface is code only, supporting lambda queries.

Portable data files, easy migrations, no breaking changes per major version 
(The plan is to keep 1.0 alive until the heat death of the universe).

x64, ARM64, RISC-V these are the most popular, only 64 bit will be supported,
but all of these architectures are compatible.

### Lightweight and Scalable: 
The database is designed to be lightweight and efficient, 
allowing it to scale seamlessly to handle growing workloads.

#### Typed Data Exchange (TDX): 
We use the TDX format, a typed data format, to store and transmit data efficiently. 
TDX supports various generic data types, including numbers, strings, datetime, JSON,
documents, enabling you to store diverse data efficiently and consistently.

#### Advanced Relationship Modeling: 
Our database supports advanced relationship modeling 
through special entities called "links." These links enable you to establish 
connections between documents within the same or different tables, 
enabling fast and efficient data traversal.

#### Recommended Hardware Configuration: 
For optimal performance, we recommend a system with 
2 cores and an NVMe SSD due to the asynchronous nature of IO operations. 
However, specific performance metrics are still under development.

#### ACID Transactions: 
The database supports multiple ACID transactions per single connection, 
ensuring data consistency and reliability. 
Connections also allow for concurrent reads and writes.

#### Written in C++: 
Written in C++ for optimal performance and control over system resources.
C++ isn't that bad as it's tooling, they made it much better now.

#### Contribute: 
Join our community to contribute to the project.

#### Community and Support
We believe in the power of an active and supportive community. Join our community discord 
to connect with other users, ask questions, share ideas, 
and contribute to the ongoing development of the database.

We're excited to have you onboard and look forward to your valuable feedback 
and contributions!